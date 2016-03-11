//
//  Problem 1.cpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include "BNode.hpp"

using namespace std;

template <class T>
BNode<T>* returnRightmostGrandson(BNode<T> *root) {
    BNode<T> leftSon = root -> left;
    BNode<T> rightSon = root -> right;
    if (rightSon == nullptr && rightSon -> right == nullptr) return nullptr;
    else return rightSon -> right;
}
