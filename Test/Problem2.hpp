//
//  Problem2.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 25.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Добавить в класс BTree <T> метод delGsons, удаляющий из дерева всех тех правнуков корня, которые являются листьями.
 */

#ifndef Problem2_hpp
#define Problem2_hpp

#include "BNode.hpp"

template <class T>
void delGsons(BNode<T> *&root, int counter = 0) {
    if (counter == 3 && isLeaf(root)) {
        delete root;
        root = nullptr;
    } else if (!isLeaf(root)) {
        delGsons(root -> left, counter+1);
        delGsons(root -> right, counter+1);
    }
}

#endif /* Problem2_hpp */
