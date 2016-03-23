//
//  Problem6.hpp
//  U-Trees
//
//  Created by Sergej Jaskiewicz on 18.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, вставляющую в дерево новый узел следующим образом: новый узел становится левым сыном корня, старые сыновья корня становятся сыновьями нового узла. Данные нового узла передаются в качестве параметра.
 */

#ifndef Problem6_hpp
#define Problem6_hpp

#include "BNode.hpp"

template <class T>
void insertLeftChildAsAdopter(BNode<T> *&root, T data) {
    root -> left = new BNode<T>(data, root -> left, root -> right);
    root -> left -> up = root;
    root -> right = nullptr;
}

#endif /* Problem6_hpp */
