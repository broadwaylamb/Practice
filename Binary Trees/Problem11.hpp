//
//  Problem11.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на самый левый лист.
 */

#ifndef Problem11_hpp
#define Problem11_hpp

#include "BNode.hpp"

template <class T>
BNode<T>** leftmostLeaf(BNode<T> *&root) {
    if (root == nullptr) return &root;
    if (root -> left == nullptr && root -> right == nullptr) return &root;
    if (root -> left != nullptr) return leftmostLeaf(root -> left);
    else return leftmostLeaf(root -> right);
}

#endif /* Problem11_hpp */
