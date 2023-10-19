/*========================================================

TITULO: TRABALHO ESTRUTURA DE DADOS

NOME: VINÍCIUS VICARI NUMERO: 2124925

DATA DE INICIO: 19/10/2023

==========================================================*/

#include <iostream>
#include <fstream>
#include "trabalhoarvore.h"
using namespace std;

/*
data: 19/10
A primeira parte do trabalho consiste em ler o arquivo exemplo1.tree
armazenando a arvore binária nele contida na memória da seguinte maneira:
                A1
               /  \
            B1     B2
           / \    /  \
          S1  X  X    S2
          /  \       /  \
         X    X     X    X           
*/

BinaryTree::BinaryTree()
{
    root = NULL;
}


