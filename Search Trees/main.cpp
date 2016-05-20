//
//  main.cpp
//  Search Trees
//
//  Created by Sergej Jaskiewicz on 06.05.16.
//  Copyright © 2016 Sergej Jaskiewicz. All rights reserved.
//

#include <string>
#include "PerformTest.hpp"

using namespace std;

int main() {
    
    string input;
    int n = 0;
    
    while (true) {
        cout<<"Enter the number of the problem you want to test:"<<endl;
        cin>>input;
        try {
            n = stoi(input);
            performTest(n);
        } catch (const invalid_argument) {
            n = 0;
            cerr<<"You're supposed to enter a number of the problem."<<endl;
        }
        while (true) {
            cout<<"Proceed? (Y/n)"<<endl;
            cin>>input;
            if (input == "Y" || input == "y") {
                break;
            } else if (input == "N" || input == "n") {
                return 0;
            }
        }
    }
    
    return 0;
}
