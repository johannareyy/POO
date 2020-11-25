#ifndef VESTIBULAR_H
#define VESTIBULAR_H

#include <iostream>
#include <string>

using namespace std;

class candidato {
private:    //normalmente se define as atributos (caracteristicas) da classe
    int num_inscricao;
    int idade;
    int pontuacao;
    int cod_do_curso_pretendido;
public:     //e aqui os metodos da classe (protocolo=metodos publicos q podem ser acessados pelo usuario)
    candidato();
    candidato(int num_inscricao, int idade, int pontuacao, int cod_do_curso_pretendido);

    int getNum_inscricao();
    void setNum_inscricao(int num_inscricao);

    int getIdade();
    void setIdade(int idade);

    int getPontuacao();
    void setPontuacao(int pontuacao);

    int getCod_do_curso_pretendido();
    void setCod_do_curso_pretendido(int cod_do_curso_pretendido);
};

#endif