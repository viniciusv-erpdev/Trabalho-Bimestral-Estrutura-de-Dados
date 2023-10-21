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
    ~BinaryTree();
    void insert(string s);
    void PreOrdem();

    private:
    struct TreeNode{
        int Entry;
        TreeNode* LeftNode;
        TreeNode* RightNode;
    };
    typedef TreeNode* TreePointer;
    TreePointer root;

    void insert(string s, TreePointer folha);
    void PreOrdem(TreePointer folha);

};

#endif