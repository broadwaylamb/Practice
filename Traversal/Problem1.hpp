//
//  Problem1.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 29.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem1_hpp
#define Problem1_hpp

#include "BNode.hpp"

template <class T>
T total(BNode<T> *root) {
    if (root == nullptr) return T(0);
    return (root -> data) + total(root -> left) + total(root -> right);
}

#endif /* Problem1_hpp */
