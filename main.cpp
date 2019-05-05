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
    double posRoot = 0;
    double negRoot = 0;
    cout << "Welcome to the Quadratic Equation calculator.\nEnter 'q' to quit.\n";
    cout << "Enter a b c :\n";
    while (cin >> a >> b >> c && a != 'q') {
        double term1 = -1.0 * b;
        double term2 = sqrt(pow(b,2) - (4.0 * a * c));
        posRoot = (term1 + term2) / (2.0 * a);
        negRoot = (term1 - term2) / (2.0 * a);
        cout << "Roots: " << posRoot << " and " << negRoot << endl;
    }
    cout << "Bye!" << endl;
    return 0;
}



