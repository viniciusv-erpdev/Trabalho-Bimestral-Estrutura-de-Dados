//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    BinaryTree arvore;
    ifstream LerArquivo("exemplo1.tree");
    string s;
    while(getline(LerArquivo, s))
            arvore.insert(s);
    arvore.PreOrdem();
    LerArquivo.close();
    return 0;

}