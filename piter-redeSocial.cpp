#include <iostream>
#include "piter-usuario.h"
#include "piter-redeSocial.h"

using namespace std;

/* inicia os atributos nescessarios incluindo o objeto usuario alocando a memória para um array de ponteiros tamnho capacidade... */
RedeSocial::RedeSocial() { 
    capacidade_usuarios = 3;
    usuario = new Usuario*[capacidade_usuarios];
    quantidade_usuarios = 0;
}

/* usuario[quantidade...] recebe um novo usuario citado pelo teclado la no main, e o quantidade_usuarios++ aumenta o tamanho do array */
void RedeSocial::registrar_usuario(string nome, string apelido) {
    Usuario* novo_usuario = new Usuario(nome, apelido);
    usuario[quantidade_usuarios] = novo_usuario;
    quantidade_usuarios++;
}

/* Libera memória */
RedeSocial::~RedeSocial() {
        delete[] usuario;
}

/* Compara uma das posições do array com o nome enviado por parametro, se achar algo compativel retorna o objeto para usar na main,
   se não retorna um objeto vazio */
Usuario RedeSocial::encontrar_usuario(string nome) {  
    for(int i=0; i<capacidade_usuarios; i++){
        if(usuario[i]->getNome() == nome)
            return *usuario[i];
    }
    return Usuario("", "");
}