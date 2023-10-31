//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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
    ifstream LerArquivo;
    system("cls");
    LerArquivo.open("exemplo1.tree");
    while(LerArquivo.eof() != true){
        LerArquivo >> s;
        if(s == "X"){
        arvore.insert(s);
        }
        arvore.PreOrdem();
    }
}

    if(num == 2){
    system("cls");
    ifstream LerArquivo;
    LerArquivo.open("exemplo2.tree");
    while(LerArquivo.eof() != true){
        LerArquivo >> s;
        if(s != "X"){
        arvore.insert(s);
        }
        arvore.PreOrdem();
    }


    return 0;

}
}