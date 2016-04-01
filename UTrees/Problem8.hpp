//
//  Problem8.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 18.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, осуществляющую левый поворот в корне.
 */

#ifndef Problem8_hpp
#define Problem8_hpp

#include "BNode.hpp"

template <class T>
void leftRotation(BNode<T> *&root) {
    if (root == nullptr || root -> right == nullptr) return;
    BNode<T> *t1 = root;
    BNode<T> *t2 = root -> left;
    BNode<T> *t3 = root -> right;
    BNode<T> *t4 = root -> right -> left;
    BNode<T> *t5 = root -> right -> right;
    root = t3;                  root -> up = t1 -> up;
    root -> left = t1;          root -> left -> up = root;
    root -> right = t5;         root -> right -> up = root;
    root -> left -> left = t2;  root -> left -> left -> up = root -> left;
    root -> left -> right = t4; root -> left -> right -> up = root -> left;
}

#endif /* Problem8_hpp */
