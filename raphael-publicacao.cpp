#include <iostream>

using namespace std;
#include "raphael-publicacao.h"
#include "piter-usuario.h"

Publicacao::Publicacao(Usuario* usuario, string conteudo): usuario(usuario), conteudo(conteudo) {
    this->data_hora = time(nullptr);
}

// Exibe as informações da classe publicação
void Publicacao::exibir_publicacao() {
    cout << "Usuario: " << usuario->getNome() << endl;
    char* data_str = ctime(&data_hora);
    cout << "Data: " << data_str; 
}
void Publicacao::setConteudo(string conteudo) {
    this->conteudo = conteudo;
}
string Publicacao::getConteudo() {
    return conteudo;
}


