//
//  Problem14.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, удаляющую самый левый узел (его правый сын становится левым сыном его отца).
 */

#ifndef Problem14_hpp
#define Problem14_hpp

#include "BNode.hpp"
#include "Problem13.hpp"

template <class T>
void deleteLeftmostNode(BNode<T> *&root) {
    if (root == nullptr) return;
    if (root -> left == nullptr) {
        delete root;
        root = root -> right;
        return;
    }
    BNode<T> **t = leftmostNode(root);
    BNode<T> *t1 = (*t) -> up;
    BNode<T> *t2 = (*t) -> right;
    (*t) -> right -> up = t1;
    delete *t;
    (*t) = t2;
}

#endif /* Problem14_hpp */
