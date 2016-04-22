//
//  Problem7.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 22.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef Problem7_hpp
#define Problem7_hpp

#include "ANode.hpp"

template <class T>
void insertNewRoot(ANode<T> *&root, T data) {
    ANode<T> *newRoot = new ANode<T>(data, root, nullptr);
    root = newRoot;
}

#endif /* Problem7_hpp */
