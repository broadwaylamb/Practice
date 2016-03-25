//
//  Problem3.hpp
//  Trees
//
//  Created by Sergej Jaskiewicz on 25.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Добавить в класс ATree<T> метод last3, возвращающий указатель на третьего с конца сына корня (можно считать, что у корня не менее трех сыновей).
 */

#ifndef Problem3_hpp
#define Problem3_hpp

#include "ANode.hpp"

template <class T>
ANode<T>** last3(ANode<T> *root) {
    int n = count(root);
    ANode<T> *t = root -> down;
    while (n > 3) {
        n--;
        t = root -> right;
    }
}

#endif /* Problem3_hpp */
