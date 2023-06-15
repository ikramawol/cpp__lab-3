//calculates e^x 
#include <iostream>
#include <cmath>

double factorial(int num) {
  if (num == 0)
    return 1;
  else
    return num * factorial(num - 1);
}

double ePowerX(double x, int n) {
  double sum = 1;
  for (int i = 1; i <= n; i++) {
    sum += pow(x, i) / factorial(i);
  }
  return sum;
}

int main() {
  double x;
  int n;
  
  cout << "Enter the value of x: ";
  cin >> x;

  cout << "Enter the number of terms to be used: ";
  cin >> n;

  double result = ePowerX(x, n);

  cout << "e^" << x << " using " << n << " terms is " << result << std::endl;

  return 0;
}