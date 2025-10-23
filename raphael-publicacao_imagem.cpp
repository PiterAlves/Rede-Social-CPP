#include <iostream>

using namespace std;
#include "raphael-publicacao_imagem.h"

//Construtor
PublicacaoImagem::PublicacaoImagem(Usuario* usuario, string conteudo, string url_imagem): Publicacao(usuario, conteudo) {
    this->url_imagem = url_imagem;
}

//Imprime apenas a imagem da subclasse
void PublicacaoImagem::exibir_publicacao() {
    Publicacao::exibir_publicacao();
    cout << "Imagem: " << url_imagem << endl;
}
void PublicacaoImagem::setUrlImagem(string url_imagem) {
    this->url_imagem = url_imagem;
}
string PublicacaoImagem::getUrlImagem() {
    return url_imagem;
}



