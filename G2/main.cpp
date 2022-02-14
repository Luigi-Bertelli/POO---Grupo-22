#include "Violao.cpp"
#include <cstdlib>
#include <iostream>

using namespace std;

void imprimeViolao(Violao v)
{
    cout << " Caracteristicas do Violao:" << endl;
    cout << "   Modelo: " << v.getModelo() << endl;
    cout << "   Marca: " << v.getMarca() << endl;
    cout << "   Cor: " << v.getCor() << endl;
    cout << "   Tipo de Corda: " << v.getTipoCorda() << endl;
}

int main()
{
    Violao x;
    char nota;
    string tocou;
    string m, cd, cor, mdl;

    cout << "Digite respectivamente a marca, tipo da corda, a cor e o modelo do violao" << endl;
    cin >> m;
    x.setMarca(m);
    cin >> cd;
    x.setTipoCorda(cd);
    cin >> cor;
    x.setCor(cor);
    cin >> mdl;
    x.setModelo(mdl);
    imprimeViolao(x);

    cout << "Qual nota voce deseja tocar? ";
    cin >> nota;
    tocou = x.tocar(nota);
    cout << "A nota tocada foi " << tocou << endl;
    cout << "O violao desafinou: " << x.getPctErro() << "%\n";
    x.afinar();
    cout << "Agora o violao esta afinado!";
    
    return 0;
}