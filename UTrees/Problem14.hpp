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

template <class T>
BNode<T>* leftmostNodeParent(BNode<T> *root) {
    if (root -> left -> left == nullptr) return root;
    return leftmostNodeParent(root -> left);
}

template <class T>
void deleteLeftmostNode(BNode<T> *&root) {
    BNode<T> *t1 = leftmostNodeParent(root);
    BNode<T> *t2 = t1 -> left;
    BNode<T> *t3 = t2 -> right;
    delete leftmostNodeParent(root) -> left;
    leftmostNodeParent(root) -> left = t3;
}

#endif /* Problem14_hpp */
