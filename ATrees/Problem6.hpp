//
//  Problem6.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 22.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem6_hpp
#define Problem6_hpp

#include "ANode.hpp"

template <class T>
void insertFirstChild(ANode<T> *root, T data) {
    if (root == nullptr) return;
    ANode<T> *t = root -> down;
    ANode<T> *newChild = new ANode<T>(data, nullptr, t);
    root -> down = newChild;
}

#endif /* Problem6_hpp */
