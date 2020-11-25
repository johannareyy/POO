#include "vestibular.hpp"
#include <string>

using namespace std;

candidato::candidato(){  //implementando o construtor da classe
    num_inscricao = 0;
    idade = 0;
    pontuacao = 0;
    cod_do_curso_pretendido = 0;
}

candidato::candidato(int num_inscricao, int idade, int pontuacao, int cod_do_curso_pretendido){
    this->num_inscricao = num_inscricao;    //diferenciar a variavel do parametro do atributo da classe
    this->idade = idade; 
    this->pontuacao = pontuacao;
    this->cod_do_curso_pretendido = cod_do_curso_pretendido;
}

int candidato::getNum_inscricao(){
    return num_inscricao;
}

void candidato::setNum_inscricao(int num_inscricao){
    this->num_inscricao = num_inscricao;
}

int candidato::getIdade(){
    return idade;
}

void candidato::setIdade(int idade){
    this->idade = idade; 
}

int candidato::getPontuacao(){
    return pontuacao;
}

void candidato::setPontuacao(int pontuacao){
    this->pontuacao = pontuacao;
}

int candidato::getCod_do_curso_pretendido(){
    return cod_do_curso_pretendido;
}

void candidato::setCod_do_curso_pretendido(int cod_do_curso_pretendido){
    this->cod_do_curso_pretendido = cod_do_curso_pretendido;
}