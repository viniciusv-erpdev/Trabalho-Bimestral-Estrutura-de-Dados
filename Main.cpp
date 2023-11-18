//Vinícius Vicari n 2124925
//Pedro Henrique Caetano Barbosa n 2154635
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string chave1, chave2, chave3;
    ifstream LerArquivo; 
    BinaryTree arvore;
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
    system("cls");
    LerArquivo.open("exemplo1.tree");
    if(!LerArquivo.is_open()){ cout << "Erro ao abrir o arquivo! \n";}
    while(LerArquivo >> chave1 >> chave2 >> chave3){
       arvore.insert(chave1, chave2, chave3);
    }
    
    arvore.contarNos(); 
    arvore.nosSemFilhos();
}

    if(num == 2){
    system("cls");
    LerArquivo.open("exemplo2.tree");
    if(!LerArquivo.is_open()){ cout << "Erro ao abrir o arquivo! \n";}
    while(LerArquivo >> chave1 >> chave2 >> chave3){
        arvore.insert(chave1, chave2, chave3);
    }
    
    arvore.contarNos();   
    arvore.nosSemFilhos();
                      

}

    arvore.PreOrdem();
    cout << arvore.contarNos() << " ";
    cout << arvore.nosSemFilhos();
    LerArquivo.close();
    return 0;
}

