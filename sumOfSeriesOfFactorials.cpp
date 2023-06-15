//sum of a series
#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, factorial = 1;
    cout << "Enter the number of terms to compute the sum: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}