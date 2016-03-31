//
//  Problem7.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 18.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, переставляющую корневой узел и его левого сына (не перестановкой данных, а изменением указателей; переставляются только эти узлы, их поддеревья должны остаться, где и были).
 */

#ifndef Problem7_hpp
#define Problem7_hpp

#include "BNode.hpp"

template <class T>
void swapRootAndLeftChild(BNode<T> *&root) {
    if (root == nullptr || root -> left == nullptr) return;
    BNode<T> *t1 = root;
    BNode<T> *t2 = root -> left;
    BNode<T> *t3 = root -> right;
    BNode<T> *t4 = root -> left -> left;
    BNode<T> *t5 = root -> left -> right;
    root = t2;                  root -> up = t1 -> up;
    root -> left = t1;          root -> left -> up = root;
    root -> right = t3;         root -> right -> up = root;
    root -> left -> left = t4;  root -> left -> left -> up = root -> left;
    root -> left -> right = t5; root -> left -> right -> up = root -> left;
}

#endif /* Problem7_hpp */
