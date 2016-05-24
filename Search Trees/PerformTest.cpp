//
//  PerformTest.cpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 06.05.16.
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
        case 0: {
            problemHeader(problemNumber);
            
            int number = 12;
            cout<<"Given a number: "<<number<<endl;
            for (int i = 0; i < 8; i++) {
                cout<<"Its "<<i<<"th bit is "<<digit(number, i)<<endl;
            }
            
            problemFooter();
            break;
        }
        case 4: {
            problemHeader(4);
            
            
            int numberArray[] = {1, 2, 3, 4, 5};
            cout<<"Given a number array: "<<endl;
            
            DSTree<int> tree = DSTree<int>();
            
            for (int i = 0; i < 5; i++) {
                cout<<numberArray[i]<<" "<<endl;
                tree.insert(i+1, numberArray[i]);
            }
            
            tree.print(true);
            
            problemFooter();
            
            break;
        }
        case 101: {
            problemHeader(101);
            
            
            int numberArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
            cout<<"Given a number array: "<<endl;
            
            DSTree<int> tree = DSTree<int>();
            
            for (int i = 0; i < 11; i++) {
                cout<<numberArray[i]<<" "<<endl;
                tree.insert(numberArray[i], numberArray[i]);
            }
            
            tree.print(true);
            
            tree.neg();
            
            tree.print(true);
            
            problemFooter();
            
            break;
        }
        case 102: {
            problemHeader(102);
            
            
            double numberArray[] = {1.0, -2.5, 0.01, 0.33, -9.1};
            cout<<"Given a number array: "<<endl;
            
            DoubleDSTree<double> tree = DoubleDSTree<double>();
            
            for (int i = 0; i < 5; i++) {
                cout<<numberArray[i]<<" "<<endl;
                tree.insert(numberArray[i], numberArray[i]);
            }
            
            cout<<endl<<endl;
            tree.print(true);
            
            problemFooter();
            
            break;
        }
        default:
            cout<<"No such problem"<<endl;
            break;
    }
}
