//Approximation value of Euler's number
#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {
    double fact = 1;
    for(int i=1;i<=n;i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 10; 
    double e = 1.0; 
    for(int i=1;i<=n;i++) {
        e += 1/factorial(i);
    }
    cout << "Approximation of Euler's number (e): " << e << endl;
    return 0;
}