#include<iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i; 
    }
    return fact;
}