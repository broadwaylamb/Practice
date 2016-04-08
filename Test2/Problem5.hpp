//
//  Problem5.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem5_hpp
#define Problem5_hpp

#include "BNode.hpp"

template <class T>
BNode<T>* search1(BNode<T> *root, T x) {
    if (root == nullptr) return nullptr;
    if (root -> data == x) return root;
    BNode<T> *t = search1(root -> left, x);
    if (t != nullptr) return t;
    else return search1(root -> right, x);
}
#endif /* Problem5_hpp */
