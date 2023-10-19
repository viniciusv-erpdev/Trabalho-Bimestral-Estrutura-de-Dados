/*========================================================

TITULO: TRABALHO ESTRUTURA DE DADOS

NOME: VINÍCIUS VICARI NUMERO: 2124925

DATA DE INICIO: 19/10/2023

==========================================================*/

#include <iostream>
#include <fstream>
#ifndef TRABALHOARVORE_H
#define TRABALHO_H 
using namespace std;

/*
data: 19/10
modificação: implementação da estrutura do tipo árvore binária
*/
class BinaryTree
{
public:
    BinaryTree();
    ~BinaryTree();
    void PreOrder();
    void Insert(int x);
    void Delete(int x);
    bool Search(int x);

private:
    struct TreeNode
    {
        int Entry;
        TreeNode *LeftNode, *RightNode;
    };
    typedef TreeNode *TreePointer;

    TreePointer root;
};


#endif