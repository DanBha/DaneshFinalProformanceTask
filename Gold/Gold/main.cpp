//
//  main.cpp
//  Gold
//
//  Created by Danesh Bharucha on 2020-11-10.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int rounds;
    int y;
    std::cout << "How many rounds of golf did you play?";
    std::cin >> rounds;
    
    int values[rounds];
    
    for(int i = 0; i < rounds; i++){
        std::cout << "What was your score for round ";
        std::cin >> y;
        std::cout<< i+1;
        values[i] = y;
    }
    
    for(int i = 0; i< rounds; i++){
        std::cout << "In round ";
        std::cout << i+1;
        std::cout << " your score was ";
        std::cout << values[i];
    }
    return 0;
}
