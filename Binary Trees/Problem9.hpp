//
//  Problem9.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на самый левый узел.
 */

#ifndef Problem9_hpp
#define Problem9_hpp

#include "BNode.hpp"

template <class T>
BNode<T>** leftmostNode(BNode<T> *&root) {
    if (root -> left == nullptr) return &root;
    return leftmostNode(root -> left);
}

#endif /* Problem9_hpp */
