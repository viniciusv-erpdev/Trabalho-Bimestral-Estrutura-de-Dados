//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

BinaryTree::BinaryTree(){
    root = NULL;
}

void BinaryTree::insert(string s, TreePointer folha){
    if(s < folha->Entry){
        if(folha->LeftNode != NULL){
            insert(s,folha->LeftNode);
        }else{
            folha->LeftNode = new TreeNode;
            folha->LeftNode->Entry = s;
            folha->LeftNode->LeftNode = NULL;
            folha->LeftNode->RightNode = NULL;
        }
    }else if(s >= folha->Entry){
        if(folha->RightNode != NULL){
            insert(s, folha->RightNode);
        }else{
            folha->RightNode = new TreeNode;
            folha->RightNode->Entry = s;
            folha->RightNode->RightNode = NULL;
            folha->RightNode->LeftNode = NULL;
        }
    }
}

void BinaryTree::insert(string s){
    if(root != NULL){
        insert(s, root);
    }else{
        root = new TreeNode;
        root->Entry = s;
        root->LeftNode = NULL;
        root->RightNode = NULL;
    }    
}

void BinaryTree::PreOrdem(){
    PreOrdem(root);
}

void BinaryTree::PreOrdem(TreeNode* folha){
    if(folha != NULL){
        cout << folha->Entry << "," << "\n";
        PreOrdem(folha->LeftNode);
        PreOrdem(folha->RightNode);
        }
    }


void BinaryTree::verificarFilho(){
    verificarFilho(root);
}

void BinaryTree::verificarFilho(TreePointer folha){
    if(folha != NULL){
        if(folha->LeftNode != NULL && folha->RightNode){
            cout << " ED" << "\n";
        }else if(folha->RightNode != NULL){
            cout << " D" << "\n";
        }else{
            cout << " E" << "\n";
        }
    }
}


