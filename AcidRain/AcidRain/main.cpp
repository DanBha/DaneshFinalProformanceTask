//
//  main.cpp
//  AcidRain
//
//  Created by Danesh Bharucha on 2020-11-10.
//

#include <iostream>


int main(int argc, const char * argv[]) {
    // insert code here...
    double pHLevel;
    std::cout << "Acid rain is a real threat to our world and our ecosystem.  If the pH level of the lake goes to low then the fish will not survive. If the pH level gets too high, the fish will not survive. This program can dictate if the pH level of the lake is able to keep the fish alive Please enter in the pH level of the lake/n";
    std::cin>> pHLevel;
    
    if(pHLevel > 7.5 && pHLevel <12.0){
        std::cout << "ALKALINE/n";
    }
    
    else if(pHLevel <6.45 && pHLevel > 2.0){
        std::cout << "ACIDIC/n";
    }
    
    else if(pHLevel>=6.45 && pHLevel<=7.5){
        std::cout << "NEUTRAL/n";
    }
    return 0;
}
