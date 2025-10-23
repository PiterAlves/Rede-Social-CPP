#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include <iostream>
#include <ctime> 

using namespace std;

class Usuario;

class Publicacao {
    private:
        Usuario* usuario;
        string conteudo;
        time_t data_hora;
    public:
        Publicacao(Usuario* usuario, string conteudo);
        void setConteudo(string conteudo);
        string getConteudo();
        virtual void exibir_publicacao();
};

#endif