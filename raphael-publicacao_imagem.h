#ifndef PUBLICACAOIMAGEM_H
#define PUBLICACAOIMAGEM_H

#include <iostream>
#include "raphael-publicacao.h"

using namespace std;

class PublicacaoImagem: public Publicacao {
    private:
        string url_imagem;
    public:
        PublicacaoImagem(Usuario* usuario, string conteudo, string url_imagem);
        void setUrlImagem(string url_imagem);
        string getUrlImagem();
        void exibir_publicacao() override;
};

#endif