//
//  Problem15.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 23.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, удаляющую самый левый лист.
 */

#ifndef Problem15_hpp
#define Problem15_hpp

#include "BNode.hpp"

template <class T>
BNode<T>** leftmostLeaf(BNode<T> *&root) {
    if (root -> left == nullptr && root -> right == nullptr) return &root;
    if (root -> left != nullptr) return leftmostLeaf(root -> left);
    else return leftmostLeaf(root -> right);
}

template <class T>
void deleteLeftmostLeaf(BNode<T> *&root) {
    BNode<T> **t = leftmostLeaf(root); //Take the address of the leftmost leaf
    delete *t;
    *t = nullptr;
}

#endif /* Problem15_hpp */
