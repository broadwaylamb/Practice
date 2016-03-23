//
//  Problem14.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, удаляющую самый левый узел (его правый сын становится левым сыном его отца).
 */

#ifndef Problem14_hpp
#define Problem14_hpp

#include "BNode.hpp"
#include "Problem13.hpp"

template <class T>
void deleteLeftmostNode(BNode<T> *&root) {
    BNode<T> *t1 = leftmostNode(root) -> up;
    BNode<T> *t2 = t1 -> left -> right;
    t1 -> left -> right -> up = t1;
    delete leftmostNode(root);
    leftmostNode(root) -> up -> left = t2; // ???: Есть ли другой способ?
}

#endif /* Problem14_hpp */
