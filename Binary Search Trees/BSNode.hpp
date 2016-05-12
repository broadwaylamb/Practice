//
//  BSNode.hpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 13.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#ifndef BSNode_hpp
#define BSNode_hpp

// Problem 1
template <class S, class T>
class BSNode {
public:
    S key;
    T data;
    BSNode<S, T> *left, *right;
};
#endif /* BSNode_hpp */
