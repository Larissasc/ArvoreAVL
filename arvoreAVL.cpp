#include "arvoreAVL.h"
#include <iostream>

using namespace std;

arvoreAVL::arvoreAVL(){
    this->raiz = NULL;
    this->alturaD = 0;
    this->alturaE = 0;
    this->qtd = 0;
}

arvoreAVL::~arvoreAVL(){
    this->clear();
}

void arvoreAVL::clear(){
    delete this->raiz;
    this->raiz=NULL;
}

void arvoreAVL::insert(int valor){
    Node *aux = this->raiz;
    Node *ant = NULL;

    while(aux!=NULL){
        cout << "Elementos: " << aux->
        ant=aux;
        if(aux->valor > valor){
            aux = aux->direito;
        }else{
            aux = aux->esquerdo;
        }
    }
    aux = new Node(valor);
}

int arvoreAVL::altura(Node * r) {
    if(r==NULL)
    {
        return -1;
    }else{
        alturaD = altura(r->direito);
        alturaE = altura(r->esquerdo);

        if(alturaD > alturaE)
        {
            return alturaD+1;
        }else{
            return alturaE+1;
        }
    }
}

int arvoreAVL::altura() {
    return altura(this->raiz)+1;
}

void arvoreAVL::balance(){

}
