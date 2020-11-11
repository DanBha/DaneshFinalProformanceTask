//
//  main.cpp
//  NumbersToWords
//
//  Created by Danesh Bharucha on 2020-11-10.
//

#include <iostream>
using namespace std;
string toTens(int y){
    switch (y){
        case 0:
            return " ";
            break;
        case 1:
            return "Tens";
            break;
        case 2:
            return "Twenty ";
            break;
        case 3:
            return "Thirty ";
            break;
        case 4: return "Fourty ";
            break;
        case 5:
            return "Fifty ";
            break;
        case 6:
            return "Sixty ";
            break;
        case 7:
            return "Seventy ";
            break;
        case 8: return "Eighty ";
            break;
        case 9:
            return "Nintey ";
        default:
            return "INVALLID";
    }
}

string toOnes(int y){
    switch (y){
        case 0:
            return " \n";
            break;
        case 1:
            return "One \n";
            break;
        case 2:
            return "Two \n";
            break;
        case 3:
            return "Three \n";
            break;
        case 4: return "Four \n";
            break;
        case 5:
            return "Five \n";
            break;
        case 6:
            return "Six \n";
            break;
        case 7:
            return "Seven \n";
            break;
        case 8: return "Eight \n";
            break;
        case 9:
            return "Nine  \n";
        default:
            return "INVALLID \n";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    int y;
    cout << "Please enter in a two digit number you want to make into words\n";
    
    cin >> x;

    y = x/10;
    cout << toTens(y);
    y = x - (y*10);
    cout << toOnes(y);

    return 0;
}

