#ifndef REDESOCIAL_H
#define REDESOCIAL_H

#include <iostream>
#include "piter-usuario.h"

using namespace std;

class RedeSocial {
    private:
        Usuario** usuario;
        int quantidade_usuarios, capacidade_usuarios;
    public:
        RedeSocial();
        void registrar_usuario(string nome, string apelido);
        Usuario encontrar_usuario(string nome); 
        ~RedeSocial();   
};

#endif