//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

BinaryTree::BinaryTree(){
    root = NULL;
}

BinaryTree::~BinaryTree(){

}

void BinaryTree::insert(string s, TreePointer folha){

}

void BinaryTree::insert(string s){
    
}

void BinaryTree::PreOrdem(){
    PreOrdem(root);
    cout << "\n";
}

void BinaryTree::PreOrdem(TreeNode* folha){
    if(folha != NULL){
        cout << folha->Entry << ",";
        PreOrdem(folha->LeftNode);
        PreOrdem(folha->RightNode);
    }
}