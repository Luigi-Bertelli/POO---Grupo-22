#include <iostream>
#include <cstdlib>
using namespace std;

class Violao{
private:
    string modelo, marca, cor, tipoCorda;
    int pctErro; // Porcentagem da nota sair desafinada
public:
    // Construtores
    Violao();
    Violao(string modelo, string marca, string cor, string tipoCorda = ""); 

    // Getters
    string getModelo();
    string getMarca();
    string getCor();
    string getTipoCorda();
    int getPctErro();

    // Setters
    void setModelo(string modelo);
    void setMarca(string marca);
    void setCor(string cor);
    void setTipoCorda(string tipoCorda);
    void setPctErro(int pct);
         
    string tocar(char nota); // Toca nota passada por parâmetro
    void afinar(); // Afina o violão
};