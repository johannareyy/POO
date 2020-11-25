#include "vestibular2.hpp"
#include <string>

using namespace std;

curso::curso(){  //implementando o construtor da classe
    vaga[] = 0;
}

curso::curso(int vaga[]){
    this->vaga[] = vaga; //diferenciar a variavel do parametro do atributo da classe
}

int curso::getVaga(){
    return vaga[];
}

void curso::setVaga(int vaga[]){
    this->vaga[] = vaga;
}