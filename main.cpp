//
//  main.cpp
//  quadratic-formula
//
//  Created by Himaja Motheram on 1/28/19.
//  Copyright © 2019 Himaja Motheram. All rights reserved.

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double a,b,c = 0;
    cout << "Enter a b c \n";
    cin >> a >> b >> c;
    double term1 = -1.0 * b;
    double term2 = sqrt(pow(b,2) - (4.0 * a * c));
    double posRoot = (term1 + term2) / (2.0 * a);
    double negRoot = (term1 - term2) / (2.0 * a);
    cout << "Roots: " << posRoot << " and " << negRoot << endl;
    return 0;
}



