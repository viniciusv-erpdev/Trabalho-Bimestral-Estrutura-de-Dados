//Vinícius Vicari n 2124925
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
    while(LerArquivo.eof() != true){
        LerArquivo >> chave1 >> chave2 >> chave3;
        if(chave1 == "X" && chave2 == "X" && chave3 == "X"){
            break;
        }
        if(chave1 != "X"){
            arvore.insert(chave1);
             }
                 if(chave2 != "X"){
                    arvore.insert(chave2);
                }
                    if(chave3 != "X"){
                        arvore.insert(chave3);
                    }
    }
}

    if(num == 2){
    system("cls");
    LerArquivo.open("exemplo2.tree");
    if(!LerArquivo.is_open()){ cout << "Erro ao abrir o arquivo! \n";}
    while(LerArquivo.eof() != true){
        LerArquivo >> chave1 >> chave2 >> chave3;
        if(chave1 == "X" && chave2 == "X" && chave3 == "X"){
            break;
        }
        if(chave1 != "X"){
            arvore.insert(chave1);
             }
                 if(chave2 != "X"){
                    arvore.insert(chave2);
                }
                    if(chave3 != "X"){
                        arvore.insert(chave3);
                    }
    }
}
    arvore.PreOrdem();
    LerArquivo.close();
    return 0;
}

