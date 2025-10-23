#include <iostream>
#include <iomanip>
#include <limits>
#include "piter-usuario.h"
#include "raphael-publicacao.h"
#include "raphael-publicacao_imagem.h"
#include "raphael-publicacao_texto.h"

using namespace std;

//Inicia os atributos
Usuario::Usuario(string nome, string apelido) {
    this->nome = nome;
    this->apelido = apelido;
    qnt_amigos=0;
    qnt_publicacoes=0;

    publicacoes = new Publicacao*[50];
}

//adiciona um usuario ao array que funciona como se fosse uma lista de amigos.
void Usuario::adicionar_amigo(Usuario* usuario) {
    amigos[qnt_amigos] = usuario;
    cout << nome << " adicionou " << amigos[qnt_amigos]->nome << " como amigo!" << endl; 
    qnt_amigos++;
}

/* O if confere qual a posição do array que tem que remover depois disso no for é adicionado ao array novamente todas as 
   posições a partir da posição eliminada, exemplo posição 1 foi removida, então a posição 1 vai receber a antiga posição 2
   e assim por diante, "depois qnt_amigos--;" só diminui o tamanho do array. */ 
void Usuario::remover_amigo(Usuario* usuario) {
    
    for(int i=0; i<qnt_amigos; i++){
        if(amigos[i]->nome == usuario->nome){
            for(int j=i; j<qnt_amigos - 1; j++){
                amigos[j] = amigos[j + 1];
            }
        }
    }
    cout << nome << " removeu " << usuario->nome << " da sua lista de amigos!" << endl;

    qnt_amigos--;
}

/*  Esse metodo pega o objeto e o conteudo passados por parametro e cria novos objetos do tipo
    de publicação escolhida pelo usuario.  */
void Usuario::criar_publicacao(Usuario* usuario, string tipo, string conteudo, string url_imagem) {
    
    if(tipo == "Texto" || tipo == "texto"){
        publicacoes[qnt_publicacoes] = new PublicacaoTexto(usuario, conteudo);
        publicacoes[qnt_publicacoes]->exibir_publicacao();
    } else {
        publicacoes[qnt_publicacoes] = new PublicacaoImagem(usuario, conteudo, url_imagem);
        publicacoes[qnt_publicacoes]->exibir_publicacao();
    }

    qnt_publicacoes++;
}

void Usuario::setNome(string nome) {
    this->nome = nome;
}

string Usuario::getNome() {
    return nome;
}

void Usuario::setApelido(string apelido) {
    this->apelido = apelido;
}

string Usuario::getApelido() {
    return apelido;
}

void Usuario::setBio(string bio) {
    this->bio = bio;
}

string Usuario::getBio() {
    return bio;
}

/* Exibe todas as informações do perfil do usuario. */
void Usuario::exibir_perfil() {
    cout << "---------- " << "Perfil de " << nome << " ----------" << endl;
    cout << endl << "Nome: " << nome << endl;
    cout << "Apelido: " << apelido << endl;
    cout << "Bio: " << bio << endl;
    cout << "Lista de amigos: " << endl;
    if(qnt_amigos==0)
        cout << "O usuario ainda não tem amigos :(" << endl;
    for(int i=0; i<qnt_amigos; i++)
        cout << amigos[i]->nome << endl;
    cout << "Publicações: " << endl;
    if(qnt_publicacoes == 0)
        cout << "O usuario ainda não publicou nada!" << endl; 
    for(int i=0; i<qnt_publicacoes; i++) {
        publicacoes[i]->exibir_publicacao();
        cout << endl;
    }
}