//
//  PerformTest.cpp
//  ATrees
//
//  Created by Sergej Jaskiewicz on 01.04.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include "PerformTest.hpp"

using namespace std;

static void problemHeader(int problemNumber) {
    cout<<"Problem "<<problemNumber<<" solution:"<<endl<<endl;
}

static void problemFooter() {
    cout<<endl<<"--------"<<endl<<endl;
}


void performTest(int problemNumber) {
    switch (problemNumber) {
        case 1: {
            problemHeader(problemNumber);
            
            ANode<int> *tree = new ANode<int>(1,
                                              new ANode<int>(2,
                                                             new ANode<int>(5, nullptr,
                                                             new ANode<int>(6, nullptr,
                                                             new ANode<int>(7))),
                                              new ANode<int>(3,
                                                             new ANode<int>(8, nullptr,
                                                             new ANode<int>(9)),
                                              new ANode<int>(4,
                                                             new ANode<int>(10, nullptr,
                                                             new ANode<int>(11, nullptr,
                                                             new ANode<int>(12, nullptr,
                                                             new ANode<int>(13))))))));
            
            printTree(tree);
            
            cout<<endl<<"The number of grandchildren of the root is: "<<countGrandChildren(tree)<<endl;
            
            problemFooter();
            break;
        }
        case 2: {
            problemHeader(problemNumber);
            
            ANode<int> *tree = new ANode<int>(1,
                                              new ANode<int>(2,
                                                             new ANode<int>(5, nullptr,
                                                             new ANode<int>(6, nullptr,
                                                             new ANode<int>(7))),
                                              new ANode<int>(3,
                                                             new ANode<int>(8, nullptr,
                                                             new ANode<int>(9)),
                                              new ANode<int>(4,
                                                             new ANode<int>(10, nullptr,
                                                             new ANode<int>(11, nullptr,
                                                             new ANode<int>(12, nullptr,
                                                             new ANode<int>(13))))))));
            
            printTree(tree);
            
            cout<<endl<<"The child with data 4 and second grandchild's data 11 is: ";
            if (ANode<int> *t = lookUpFirstChildSecondGrandChild(tree, 4, 11))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 2 and second grandchild's data 5 is: ";
            if (ANode<int> *t = lookUpFirstChildSecondGrandChild(tree, 2, 5))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 3 and second grandchild's data 10 is: ";
            if (ANode<int> *t = lookUpFirstChildSecondGrandChild(tree, 3, 10))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 5 and second grandchild's data 0 is: ";
            if (ANode<int> *t = lookUpFirstChildSecondGrandChild(tree, 5, 0))
                cout<<t -> data;
            else
                cout<<"not found";
            
            problemFooter();
            break;
        }
        case 3: {
            problemHeader(problemNumber);
            
            ANode<int> *tree = new ANode<int>(1,
                                              new ANode<int>(2,
                                                             new ANode<int>(5, nullptr,
                                                             new ANode<int>(6, nullptr,
                                                             new ANode<int>(7))),
                                              new ANode<int>(3,
                                                             new ANode<int>(8, nullptr,
                                                             new ANode<int>(9)),
                                              new ANode<int>(4,
                                                             new ANode<int>(10, nullptr,
                                                             new ANode<int>(11, nullptr,
                                                             new ANode<int>(12, nullptr,
                                                             new ANode<int>(13))))))));

            
            printTree(tree);
            
            
            cout<<endl<<"The child with data 4 and one of grandchilds' data 11 is: ";
            if (ANode<int> *t = lookUpFirstChildGrandChild(tree, 4, 11))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 2 and one of grandchilds' data 5 is: ";
            if (ANode<int> *t = lookUpFirstChildGrandChild(tree, 2, 5))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 3 and one of grandchilds' data 10 is: ";
            if (ANode<int> *t = lookUpFirstChildGrandChild(tree, 3, 10))
                cout<<t -> data;
            else
                cout<<"not found";
            
            cout<<endl<<"The child with data 5 and one of grandchilds' data 0 is: ";
            if (ANode<int> *t = lookUpFirstChildGrandChild(tree, 5, 0))
                cout<<t -> data;
            else
                cout<<"not found";
            
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}