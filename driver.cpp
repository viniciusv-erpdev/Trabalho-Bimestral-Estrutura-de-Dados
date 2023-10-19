/*========================================================

TITULO: TRABALHO ESTRUTURA DE DADOS

NOME: VINÍCIUS VICARI NUMERO: 2124925

DATA DE INICIO: 19/10/2023

==========================================================*/

#include <iostream>
#include <fstream>
#include <string>
#include "trabalhoarvore.h"
using namespace std;

/*
data:19/10
Implementar um forma de leitura do arquivo montando a árvore na memória
*/

int main()
{
BinaryTree arvore;
ifstream in ("exemplo1.tree");
int s;
while (getline(in, s))
{
    arvore.Insert(s);
    arvore.PreOrder();
    in.close();
}
}
