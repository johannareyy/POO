#include <iostream>
#include <fstream>
#include <time.h>
#include "vestibular.hpp"
#include "vestibular.cpp"

#define TAM 826

using namespace std;


int main(){
    srand(time(NULL));
    ofstream arquivo;

    candidato candid[TAM];

    arquivo.open ("dados.txt");

    for(unsigned int i=0; i<TAM; i++){            //gera os dados randomicamente
        candid[i].setNum_inscricao(rand()%9999999+1); 
        if(candid[i].getNum_inscricao() < 0){
            arquivo.close();
            cout << "programa finalizado";
            break;
        }
        candid[i].setIdade(rand()%50+15); 
        candid[i].setPontuacao(rand()%5000);
        if(candid[i].getPontuacao() < 0 or candid[i].getPontuacao() > 5000){
            cout << "nota invalida";
            break;
        }
        candid[i].setCod_do_curso_pretendido(rand()%4+1);
        arquivo << candid[i].getNum_inscricao() << "\n" << candid[i].getIdade() << "\n" << candid[i].getPontuacao() << "\n" << candid[i].getCod_do_curso_pretendido() << "\n"; 
    }

    arquivo.close();

    return 0;
}