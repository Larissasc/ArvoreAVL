#ifndef ARVOREAVL_H
#define ARVOREAVL_H

#include "node.h"

class arvoreAVL{

    int qtd;
    int alturaD;
    int alturaE;
    Node *raiz;

    int altura(Node*);

public:
    arvoreAVL(){}
    ~arvoreAVL(){}

    void insert(int){}
    void balance(){}
    void clear(){}

    virtual int altura(){}


};

#endif // ARVOREAVL_H
