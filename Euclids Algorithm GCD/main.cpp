//
//  main.cpp
//  Euclids Algorithm GCD
//
//  Created by Quin’darius Lyles-Woods on 1/16/20.
//  Copyright © 2020 Quin’darius Lyles-Woods. All rights reserved.
//

#include <iostream>

int eGCD(int m, int n){
    if(n == 0)
        return 0;
    return eGCD(m, m % n);
}


int main(int argc, const char * argv[]) {
    std:: cout << eGCD(60, 24);
}

