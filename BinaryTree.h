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
    void PreOrdem();
    void insert(string s1, string s2, string s3);
    void verificarFilho();
    int contarNos();

    private:

    struct TreeNode{
        string Entry;
        TreeNode* LeftNode;
        TreeNode* RightNode;
    };
    typedef TreeNode* TreePointer;
    TreePointer root;

    void PreOrdem(TreePointer folha);
    void insert(string s1, string s2, string s3, TreePointer folha);
    void verificarFilho(TreePointer folha);
    int contarNos(TreePointer folha);
};

#endif