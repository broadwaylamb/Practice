//
//  BNode.cpp
//  Programming Practice
//
//  Created by Sergej Jaskiewicz on 11.03.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include "BNode.hpp"
#include <iostream>
using namespace std;


template<class T>
void print(BNode<T> *r, int offset = 0)
{
    if(r == nullptr) return;
    print(r -> right, offset + 3);
    for(int i = 0; i < offset; i++) cout<<' ';
    cout<< r -> data <<endl;
    print(r -> left, offset + 3);
}