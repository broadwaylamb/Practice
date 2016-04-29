//
//  Problem2.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 29.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem2_hpp
#define Problem2_hpp

#include "BNode.hpp"

template <class T>
int height(BNode<T> *root) {
    if (root == nullptr) return 0;
    if (root -> left == nullptr && root -> right == nullptr) return 1;

    int heightLeft = height(root -> left);
    int heightRight = height(root -> right);
    int maxHeight = 0;
    if (heightLeft > heightRight) {
        maxHeight = heightLeft;
    } else {
        maxHeight = heightRight;
    }
    return maxHeight + 1;
}

#endif /* Problem2_hpp */
