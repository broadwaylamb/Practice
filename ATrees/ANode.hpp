//
//  ANode.hpp
//  ATrees
//
//  Created by Sergej Jaskiewicz on 25.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef ANode_hpp
#define ANode_hpp

#include <iostream>

template<class T>
struct ANode {
    T data;
    ANode<T> *down, *right;
    ANode(T dd, ANode<T> *d = nullptr, ANode<T> *r = nullptr): data(dd), down(d), right(r) {}
};

template<class T>
void printTree(ANode<T> *root, int offset = 0) {
    if(root == nullptr) return;
    for(int i = 0; i < offset; i++)
        std::cout<<" ";
    std::cout<< root -> data <<std::endl;
    printTree(root -> down,  offset + 3);
    printTree(root -> right, offset);
}

template<class T>
int count(ANode<T> *root) {
    int c = 0;
    if(root == nullptr) return c;
    root = root -> down;
    while(root != nullptr) {
        c++;
        root = root -> right;
    }
    return c;
}


#endif /* ANode_hpp */
