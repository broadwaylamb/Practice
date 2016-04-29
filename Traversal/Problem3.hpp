//
//  Problem3.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 29.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem3_hpp
#define Problem3_hpp

#include "BNode.hpp"

template <class T>
T min(BNode<T> *root) {
    if (root == nullptr) throw "The root cannot be nullptr.";
    if (root -> left == nullptr && root -> right == nullptr) return root -> data;
    T minLeft = (root -> left != nullptr) ? min(root -> left) : root -> data;
    T minRight = (root -> right != nullptr) ? min(root -> right) : root -> data;
    return std::min(std::min(minLeft, minRight), root -> data);
}

#endif /* Problem3_hpp */
