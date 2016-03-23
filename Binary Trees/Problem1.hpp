//
//  Problem1.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 *
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на самого правого внука корня (если у корня нет внуков, вернуть nullptr).
 *
 */

#include "BNode.hpp"

#ifndef Problem1_hpp
#define Problem1_hpp

template <class T>
BNode<T> *rightmostGrandchild(BNode<T> *root) {
    if (root == nullptr) return nullptr;
    BNode<T> *leftChild = root -> left;
    BNode<T> *rightChild = root -> right;
    if (rightChild -> right != nullptr) return rightChild -> right;
    if (rightChild -> left != nullptr) return rightChild -> left;
    if (leftChild -> right != nullptr) return leftChild -> right;
    if (leftChild -> left != nullptr) return leftChild -> left;
    return nullptr;
}

#endif /* Problem1_hpp */