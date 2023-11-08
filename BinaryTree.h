//Vinícius Vicari n 2124925
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BinaryTree{
    
    public:

    BinaryTree();
    void insert();
    void PreOrdem();
    void insert(string s);
    void verificarFilho();

    private:

    struct TreeNode{
        string Entry;
        TreeNode* LeftNode;
        TreeNode* RightNode;
    };
    typedef TreeNode* TreePointer;
    TreePointer root;

    void PreOrdem(TreePointer folha);
    void insert(string s, TreePointer folha);
    void verificarFilho(TreePointer folha);
};

#endif