//
//  Problem5.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 25.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Добавить в класс BTree <T> метод del0, уничтожающий все поддеревья узлов, данные которых равны 0 (вместе с самими этими узлами).
 */

#ifndef Problem5_hpp
#define Problem5_hpp

#include "BNode.hpp"

template <class T>
void del0(BNode<T> *&root) {
    if (root -> data == 0)
        deleteSubtree(root);
    else if (!isLeaf(root)){
        del0(root -> left);
        del0(root -> right);
    }
}

#endif /* Problem5_hpp */
