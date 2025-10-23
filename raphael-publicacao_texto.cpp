#include <iostream>

using namespace std;
#include "raphael-publicacao_texto.h"

//Construtor, não exige atributos?
PublicacaoTexto::PublicacaoTexto(Usuario* usuario, string conteudo): Publicacao(usuario, conteudo) {
    // ...
}

//Imprime apenas o conteudo da classe PublicaÇão
void PublicacaoTexto::exibir_publicacao() {
    Publicacao::exibir_publicacao();
    cout << "Texto: " << Publicacao::getConteudo() << endl;
}



