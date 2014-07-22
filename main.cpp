#include <iostream>
#include "arvoreAVL.h"

using namespace std;

int main()
{

    cout << "Inicio!" << endl;
    arvoreAVL* arvore;

    arvore->insert(55);

    cout << "altura: "<< arvore->altura() << endl;

  return 0;
}
