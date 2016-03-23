//
//  BNode.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include <iostream>

#ifndef BNode_hpp
#define BNode_hpp

template <class T>
struct BNode {
    T data;
    BNode<T> *left, *right;
    BNode(T dd, BNode<T> *l = nullptr, BNode<T> *r = nullptr): data(dd), left(l), right(r) {}
};

template<class T>
void printTree(BNode<T> *root, int offset = 0) {
    if(root == nullptr) return;
    printTree(root -> right, offset + 3);
    for(int i = 0; i < offset; i++) std::cout<<" ";
    std::cout<< root -> data <<std::endl;
    printTree(root -> left, offset + 3);
}

template<class T>
int countChildren(BNode<T> *root) {
    int n = 0;
    if(root == nullptr) return n;
    if(root -> left != nullptr) n++;
    if(root -> right != nullptr) n++;
    return n;
}

#endif