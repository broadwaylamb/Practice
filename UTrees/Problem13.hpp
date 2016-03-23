//
//  Problem13.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, вставляющую в дерево левого сына у самого левого узла. Данные нового узла передаются в качестве параметра.
 */

#ifndef Problem13_hpp
#define Problem13_hpp

#include "BNode.hpp"

template <class T>
BNode<T>* leftmostNode(BNode<T> *root) {
    if (root -> left == nullptr) return root;
    return leftmostNode(root -> left);
}

template <class T>
void insertLeftChildForLeftmostNode(BNode<T> *&root, T data) {
    BNode<T> *t = new BNode<T>(data);
    t -> up = leftmostNode(root);
    leftmostNode(root) -> left = t;
}

#endif /* Problem13_hpp */
