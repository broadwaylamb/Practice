//
//  Problem1.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 25.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Добавить в класс BTree<T> метод getRLmost, возвращающий указатель на самого левого потомка самого правого узла.
 */

#ifndef Problem1_hpp
#define Problem1_hpp

#include "BNode.hpp"

template <class T>
BNode<T>** rightmostNode(BNode<T> *&root) {
    if (root -> right == nullptr) return &root;
    return rightmostNode(root -> right);
}

template <class T>
BNode<T>** leftmostNode(BNode<T> *&root) {
    if (root -> left == nullptr) return &root;
    return leftmostNode(root -> left);
}

template <class T>
BNode<T>** getRLmost(BNode<T> *&root) {
    return leftmostNode(*rightmostNode(root));
}

#endif /* Problem1_hpp */
