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
BNode<T>* leftmostLeafParent(BNode<T> *root) {
    if (root -> left -> left == nullptr && root -> left -> right == nullptr) return root;
    if (root -> right -> left == nullptr && root -> right -> right == nullptr) return root;
    if (root -> left != nullptr) return leftmostLeafParent(root -> left);
    else return leftmostLeafParent(root -> right);
}

template <class T>
void deleteLeftmostLeaf(BNode<T> *&root) {
    bool isLeft = (leftmostLeaf(root) == leftmostLeafParent(root) -> left);
    delete leftmostLeaf(root);
    if (isLeft) {
        leftmostLeafParent(root) -> left = nullptr;
    } else {
        leftmostLeafParent(root) -> right = nullptr;
    }
}

#endif /* Problem15_hpp */
