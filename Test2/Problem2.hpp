//
//  Problem2.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem2_hpp
#define Problem2_hpp

#include "BNode.hpp"

template <class T>
bool isLeaf(BNode<T> *root) {
    if (root == nullptr) return false;
    return root -> right == nullptr && root -> left == nullptr;
}

template <class T>
void delGsons(BNode<T> *&root) {
    if (root == nullptr) return;
    if (root -> left != nullptr && isLeaf(root -> left -> left)) {
        delete root -> left -> left;
        root -> left -> left = nullptr;
    }
    if (root -> left != nullptr && isLeaf(root -> left -> right)) {
        delete root -> left -> right;
        root -> left -> right = nullptr;
    }
    if (root -> right != nullptr && isLeaf(root -> right -> left)) {
        delete root -> right -> left;
        root -> right -> left = nullptr;
    }
    if (root -> right != nullptr && isLeaf(root -> right -> right)) {
        delete root -> right -> right;
        root -> right -> right = nullptr;
    }
}

#endif /* Problem2_hpp */
