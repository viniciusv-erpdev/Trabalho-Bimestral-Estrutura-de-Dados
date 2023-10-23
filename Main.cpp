//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    BinaryTree arvore;
    string s;
    int num;
    
    cout << "Selecione uma das opcoes: \n";
    cout << "1.ler exemplo1 \n";
    cout << "2.ler exemplo2 \n";
    cin >> num;

    while (num >=3){
            cout << "Selecione uma das opcoes: \n";
            cout << "1.ler exemplo1 \n";
            cout << "2.ler exemplo2 \n";
            cin >> num;

    }
    
    if(num == 1){
    ifstream LerArquivo("exemplo1.tree");
    while(getline(LerArquivo, s))
            arvore.insert(s);
    arvore.PreOrdem();
    LerArquivo.close();
    }

    if(num == 2){
    ifstream LerArquivo("exemplo2.tree");
    while(getline(LerArquivo, s))
            arvore.insert(s);
    arvore.PreOrdem();
    LerArquivo.close();
    }


    return 0;

}
