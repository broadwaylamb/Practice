//
//  Problem5.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 18.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, вставляющую в дерево новый узел следующим образом: новый узел становится левым сыном корня, старый левый сын корня становится левым сыном нового узла, правого сына у нового узла не будет.
 */

#ifndef Problem5_hpp
#define Problem5_hpp

#include "BNode.hpp"

template <class T>
void insertLeftChildBetween(BNode<T> *&root, T data) {
    root -> left = new BNode<T>(data, root -> left);
    root -> left -> up = root;
}

#endif /* Problem5_hpp */
