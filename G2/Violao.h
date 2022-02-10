#include <iostream>
using namespace std;

class Violao{
public:
    string modelo, marca, cor, tipoCorda;
private:
    // Construtores
    Violao();
    Violao(string modelo, string marca, string cor, string tipoCorda = ""); 

    // Getters
    string getModelo();
    string getMarca();
    string getCor();
    string getTipoCorda();

    // Setters
    void setModelo(string modelo);
    void setMarca(string marca);
    void setCor(string cor);
    void setTipoCorda(string tipoCorda);
         
    string tocar(string nota); // Toca nota passada por parâmetro
    void afinar(); // Afina o violão
};