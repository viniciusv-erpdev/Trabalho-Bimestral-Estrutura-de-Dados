//Vinícius Vicari n 2124925
#include "BinaryTree.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


BinaryTree::BinaryTree(){
    root = NULL;
}

void BinaryTree::insert(string s1, string s2, string s3, TreePointer folha) {
    if (folha == NULL){
        return;
    }

    if (folha->Entry == s1) {
        if (s2 != "X" && folha->LeftNode == NULL) {
            folha->LeftNode = new TreeNode;
            folha->LeftNode->Entry = s2;
            folha->LeftNode->LeftNode = NULL;
            folha->LeftNode->RightNode = NULL;
        }
        if (s3 != "X" && folha->RightNode == NULL) {
            folha->RightNode = new TreeNode;
            folha->RightNode->Entry = s3;
            folha->RightNode->LeftNode = NULL;
            folha->RightNode->RightNode = NULL;
        }
    }

    insert(s1, s2, s3, folha->LeftNode);
    insert(s1, s2, s3, folha->RightNode);
}

void BinaryTree::insert(string s1, string s2, string s3) {
    if (root == NULL) {
        root = new TreeNode;
        root->Entry = s1;
        root->LeftNode = nullptr;
        root->RightNode = nullptr;
    }

    insert(s1, s2, s3, root);
}

void BinaryTree::verificarFilho(){
    verificarFilho(root);
}

void BinaryTree::verificarFilho(TreePointer folha){
    if (folha != NULL) {
        int numFilhos = 0;
        int guardaNumFilhos = 0;

        if (folha->LeftNode != NULL) {
            numFilhos++;
        }

        if (folha->RightNode != NULL) {
            numFilhos++;
        }

        cout << " " << numFilhos;

        if(numFilhos == 2){ cout << " ED";}
        if(numFilhos == 0){ cout << " F";}
        if(numFilhos == 1 && folha->LeftNode == NULL){ cout << " D";}
        if(numFilhos == 1 && folha->RightNode == NULL){ cout << " E";}
    }
}

int BinaryTree::contarNos(){
    contarNos(root);
}

int BinaryTree::contarNos(TreeNode* folha){
    if(folha == NULL){
        return 0;
    }

    else{
        return 1 + contarNos(folha->LeftNode) + contarNos(folha->RightNode);
    }
}

void BinaryTree::PreOrdem(){
    PreOrdem(root);
}

void BinaryTree::PreOrdem(TreeNode* folha){
    if(folha != NULL){
        cout << folha->Entry << ",";
        verificarFilho(folha);
        cout << "\n";
        PreOrdem(folha->LeftNode);
        PreOrdem(folha->RightNode);    
        }
    }
