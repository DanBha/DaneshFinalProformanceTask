//
//  main.cpp
//  CloserToTwo
//
//  Created by Danesh Bharucha on 2020-11-10.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double total, num1, num2;
    num1 = 0;
    num2 = 1;
    total = 0;
    
    cout << "This program adds 2 numbers together while cutting one of the numbers in half every time it is added. This will continue until the number gets to 2";
    cout << " ";
    
    while(total < 2){
        total = total +num1 + num2;
        num2 = num2/2;
        cout << total;
        cout << " ";
    }
    
    return 0;
}
