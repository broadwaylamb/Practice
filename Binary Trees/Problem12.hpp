//
//  Problem12.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на второй лист слева.
 */

#ifndef Problem12_hpp
#define Problem12_hpp

#include "BNode.hpp"

template <class T>
BNode<T>* secondFromLeftLeaf(BNode<T> *root) {
    if(root -> left -> left == nullptr && root -> left -> right == nullptr
       && root -> right -> left == nullptr && root -> right -> left == nullptr)
        return root -> right;
    if (root -> left != nullptr) return secondFromLeftLeaf(root -> left);
    else return secondFromLeftLeaf(root -> right);
}

#endif /* Problem12_hpp */
