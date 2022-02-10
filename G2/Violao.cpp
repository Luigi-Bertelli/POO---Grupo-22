#include <iostream>
#include "Violao.h"
using namespace std;

// Construtor default
Violao::Violao()
{
    Violao::setCor("");
    Violao::setMarca("");
    Violao::setModelo("");
    Violao::setTipoCorda("");
}

// Construtor com parâmetros
Violao::Violao(string modelo, string marca, string cor, string tipoCorda = "")
{
    Violao::setModelo(modelo);
    Violao::setMarca(marca);
    Violao::setCor(cor);
    Violao::setTipoCorda(tipoCorda);
}
