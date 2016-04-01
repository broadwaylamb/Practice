//
//  Problem15.hpp
//  Binary Trees
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
#include "Problem11.hpp"

template <class T>
void deleteLeftmostLeaf(BNode<T> *&root) {
    if (root == nullptr) return;
    BNode<T> **t = leftmostLeaf(root);
    delete (*t);
    (*t) = nullptr;
}

#endif /* Problem15_hpp */
