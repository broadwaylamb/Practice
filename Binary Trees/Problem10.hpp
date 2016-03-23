//
//  Problem10.hpp
//  Binary Trees
//
//  Created by Sergej Jaskiewicz on 21.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

/*
 * Написать функцию, принимающую в качестве параметра дерево и возвращающую указатель на узел, полученный из корня при помощи поочередного перемещения вправо и влево (первый шаг вправо, второй влево, третий опять вправо и т. д.) до тех пор, пока такие перемещения не станут невозможны.
 */

#ifndef Problem10_hpp
#define Problem10_hpp

#include "BNode.hpp"

template <class T>
BNode<T>* stepRightStepLeft(BNode<T> *root, bool right = true) {
    if(right)
        if(root -> right == nullptr) return root;
        else return stepRightStepLeft(root -> right, false);
    else
        if (root -> left == nullptr) return root;
        else return stepRightStepLeft(root -> left, true);
}

#endif /* Problem10_hpp */
