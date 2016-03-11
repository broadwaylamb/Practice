//
//  Problem4.hpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 
 Написать функцию, вставляющую в дерево новый корень (старый корень становится правым сыном нового, а левого сына у нового корня не будет). Данные нового узла передаются в качестве параметра.
 
 */

#include "BNode.hpp"

#ifndef Problem4_hpp
#define Problem4_hpp

template <class T>
void insertNewRootWithData(BNode<T> *&root, T data) {
    root = new BNode<T>(data, nullptr, root);
}

#endif

