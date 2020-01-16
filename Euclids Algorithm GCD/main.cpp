//
//  main.cpp
//  Euclids Algorithm GCD
//
//  Created by Quin’darius Lyles-Woods on 1/16/20.
//  Copyright © 2020 Quin’darius Lyles-Woods. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int eGCD(int num1, int num2);
    std::cout<< eGCD(60, 24);
    
}

int eGCD(int m, int n){
    if(n == 0)
        return m;
    return eGCD(n, m % n);
}
