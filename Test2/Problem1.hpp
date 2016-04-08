//
//  Problem1.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 08.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem1_hpp
#define Problem1_hpp

#include "BNode.hpp"

template <class T>
int count(BNode<T> *root, int depth = 2) {
    if (root == nullptr ||  depth < 0) {
        return 0;
    }
    int n = 0;
    n += count(root -> left, depth - 1);
    n += count(root -> right, depth - 1);
    ++n;
    return n;
}

#endif /* Problem1_hpp */
