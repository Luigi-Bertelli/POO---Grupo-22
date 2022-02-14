#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Violao.h"
using namespace std;

// Construtor Default
Violao::Violao(){
    
    setModelo("");
    setMarca("");
    setCor("Sem cor");
    setTipoCorda("");
    pctErro=0;
}

// Construtor com parâmetros
Violao::Violao(string modelo, string marca, string cor, string tipoCorda){
    
    setModelo(modelo);
    setMarca(marca);
    setCor(cor);
    setTipoCorda(tipoCorda);
    pctErro=0;
}

/* Setters - Início */
void Violao::setModelo(string mod){
    if(mod=="folk" || mod=="flat" || mod=="jumbo")
        modelo = mod;
    else
        modelo = "Modelo invalido";    
}

void Violao::setMarca(string mar){
    if(mar=="yamaha" || mar=="giannini" || mar=="taylor")
         marca = mar;
    else
        marca = "Marca invalida";     
}

void Violao::setCor(string c0){
    cor=c0;
}

void Violao::setTipoCorda(string cord){
    if(cord=="nylon" || cord=="aco")
        tipoCorda = cord;
    else
        tipoCorda = "Tipo de corda invalida";    
}

void Violao::setPctErro(int pct0){
    pctErro = pct0;
}
/* Setters - Fim */

/* Getters - Início */
int Violao::getPctErro(){
    return pctErro;  
}

string Violao::getMarca(){
    return marca;
}

string Violao::getModelo(){
    return modelo;
}

string Violao::getCor(){
    return cor;
}

string Violao::getTipoCorda(){
    return tipoCorda;
}
/* Getters - Fim */

// Afina o violão reduzindo a chance de desafinar
void Violao::afinar(){
    pctErro = 0;
}


string Violao::tocar(char nota){
    srand(time(NULL));
    int pct0;
    string tocou;
    
    switch(nota){
        case 'A':
            tocou = "La";
            break;
        case 'B':
            tocou = "Si";
            break;
        case 'C':
            tocou = "Do";
            break;
        case 'D':
            tocou = "Re";
            break;
        case 'E':
            tocou = "Mi";
            break;
        case 'F':
            tocou = "Fa";
            break;
        case 'G':
            tocou = "Sol";
            break;
        default:
            tocou="";
    };
    pct0=rand()%100;
    setPctErro(pct0);
    
    return tocou;
}