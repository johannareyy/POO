#ifndef VESTIBULAR2_H
#define VESTIBULAR2_H

#include <iostream>
#include <string>

using namespace std;

class curso {
private:    //normalmente se define as atributos (caracteristicas) da classe
    int vaga[40];
public:     //e aqui os metodos da classe (protocolo=metodos publicos q podem ser acessados pelo usuario)
    curso();
    curso(int vaga[]);
    int getVaga();
    void setVaga(int vaga[]);
};

#endif