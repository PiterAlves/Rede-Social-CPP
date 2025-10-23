#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>

using namespace std;

class Publicacao;

class Usuario {
    private:
        string nome;
        string apelido;
        string bio;
        int qnt_publicacoes;
        int qnt_amigos;
        Usuario *amigos[5];
        Publicacao** publicacoes;
    public:
        Usuario(string nome, string apelido);
        void adicionar_amigo(Usuario* usuario);
        void remover_amigo(Usuario* usuario);
        void criar_publicacao(Usuario* usuario, string tipo, string conteudo, string url_imagem);
        void exibir_perfil();
        void setNome(string nome);
        string getNome();
        void setApelido(string apelido);
        string getApelido();
        void setBio(string bio);
        string getBio();
};

#endif