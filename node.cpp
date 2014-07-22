#include "node.h"

#include <iostream>

using namespace std;

Node :: Node(int valor) {
    this->valor = valor;
    this->direito = this->esquerdo = NULL;
}

Node :: Node()
{
    this->direito =  this->esquerdo = NULL;
}
