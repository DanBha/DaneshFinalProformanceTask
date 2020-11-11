//
//  main.cpp
//  AcidRain
//
//  Created by Danesh Bharucha on 2020-11-10.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double pHLevel;
    cout << "Acid rain is a real threat to our world and our ecosystem.  If the pH level of the lake goes to low then the fish will not survive. If the pH level gets too high, the fish will not survive. This program can dictate if the pH level of the lake is able to keep the fish alive";
    cout << "Please enter in the pH level of the lake/n";
    cin>> pHLevel;
    
    if(pHLevel > 7.5 && pHLevel <12.0){
        cout << "ALKALINE/n";
    }
    
    else if(pHLevel <6.45 && pHLevel > 2.0){
        cout << "ACIDIC/n";
    }
    
    else if(pHLevel>=6.45 && pHLevel<=7.5){
        cout << "NEUTRAL/n";
    }
    return 0;
}
