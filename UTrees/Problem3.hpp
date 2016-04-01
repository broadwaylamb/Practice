//
//  Problem3.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, удаляющую корень дерева, в предположении, что у него нет правого сына, и левый сын становится новым корнем дерева.
 */

#include "BNode.hpp"

#ifndef Problem3_hpp
#define Problem3_hpp

template <class T>
void replaceRootWithLeftSon(BNode<T> *&root) {
    if (root == nullptr || root -> right != nullptr) return;
    BNode<T> *leftChild = root -> left;
    leftChild -> up = root -> up;
    delete root;
    root = leftChild;
}

#endif /* Problem3_hpp */