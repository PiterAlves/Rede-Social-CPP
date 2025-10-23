#ifndef PUBLICACAOTEXTO_H
#define PUBLICACAOTEXTO_H

#include <iostream>
#include "raphael-publicacao.h"

using namespace std;

class PublicacaoTexto: public Publicacao {
    private:

    public:
        PublicacaoTexto(Usuario* usuario, string conteudo);
        void exibir_publicacao() override;
};

#endif