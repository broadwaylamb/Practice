//
//  Problem12.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на второй лист слева.
 */

#ifndef Problem12_hpp
#define Problem12_hpp

#include "BNode.hpp"
#include "Problem11.hpp"

template <class T>
static void findFork(BNode<T> *root, BNode<T> *&fork) {
    if (root == nullptr) return;
    if (root -> left != nullptr && root -> right != nullptr) {
        fork = root;
        findFork(root -> left, fork);
    }
}


template <class T>
BNode<T>** secondFromLeftLeaf(BNode<T> *&root) {
    if (root == nullptr) return &root;
    BNode<T> *fork = nullptr;
    findFork(root, fork);
    return leftmostLeaf(fork -> right);
}

#endif /* Problem12_hpp */
