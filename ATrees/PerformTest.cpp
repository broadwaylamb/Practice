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
        case 4: {
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
            
            int arr[2] = {3, 2};
            cout<<"The looked up node for [3, 2] is: "<<lookUp(tree, arr, 2) -> data;
            
            problemFooter();
            break;
        }
        case 5: {
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
            
            int arr[2] = {3, 9};
            cout<<"The looked up node for [3, 9] is: "<<lookUpWithData(tree, arr, 2) -> data;
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            problemFooter();
            break;
        }
        case 6: {
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
            
            insertFirstChild(tree, 100);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 7: {
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
            
            insertNewRoot(tree, 100);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 8: {
            problemHeader(problemNumber);
            
            cout<<"Test case 1: first child has children"<<endl<<endl;
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
            
            deleteFirstChild(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            
            cout<<endl<<"Test case 2: first child is an orphan"<<endl<<endl;
            
            tree = new ANode<int>(1,
                                  new ANode<int>(2, nullptr,
                                  new ANode<int>(3,
                                                 new ANode<int>(8, nullptr,
                                                 new ANode<int>(9)),
                                  new ANode<int>(4,
                                                 new ANode<int>(10, nullptr,
                                                 new ANode<int>(11, nullptr,
                                                 new ANode<int>(12, nullptr,
                                                 new ANode<int>(13))))))));
            
            printTree(tree);
            
            deleteFirstChild(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        case 9: {
            problemHeader(problemNumber);
            
            cout<<"Test case 1: first child has children"<<endl<<endl;
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
            
            flatten1(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            
            cout<<endl<<"Test case 2: first child is an orphan"<<endl<<endl;
            
            tree = new ANode<int>(1,
                                  new ANode<int>(2, nullptr,
                                                 new ANode<int>(3,
                                                                new ANode<int>(8, nullptr,
                                                                               new ANode<int>(9)),
                                                                new ANode<int>(4,
                                                                               new ANode<int>(10, nullptr,
                                                                                              new ANode<int>(11, nullptr,
                                                                                                             new ANode<int>(12, nullptr,
                                                                                                                            new ANode<int>(13))))))));
            
            printTree(tree);
            
            flatten1(tree);
            
            cout<<endl<<"The new tree:"<<endl<<endl;
            
            printTree(tree);
            
            problemFooter();
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}