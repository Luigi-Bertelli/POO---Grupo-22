#include <iostream>
#include <cstdlib>
#include <ctime>
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

string Violao::tocar(char nota)
{
    srand(time(NULL));
    int random = rand() % 100; // Número aletório de 0-100
    string tocou = "";
    
    //  Verifica nota tocada
    switch (nota)
    {
    case 'A':
        tocou = "Lá";
    case 'B':
        tocou = "Si";
    case 'C':
        tocou = "Dó";
    case 'D':
        tocou = "Ré";
    case 'E':
        tocou = "Mi";
    case 'F':
        tocou = "Fá";
    case 'G':
        tocou = "Sol";   
    default:
        tocou = "";
    };

    // Verifica se nota foi tocada de forma desafinada
    if(random >= 0 && random <= getPctErro())
        tocou.append(" - Desafinado");

    setPctErro(getPctErro() + 0.2);

    return tocou;    
}

void Violao::afinar()
{
    setPctErro(0);
}