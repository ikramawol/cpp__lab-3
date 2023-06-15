//Prime number identifier using isPrime function
#include <iostream>
using namespace std;
bool isPrime(int num) {
  if (num == 2 || num == 3)
    return true;
  if (num == 1 || num % 2 == 0)
    return false;
  for (int i = 3; i*i <= num; i += 2) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int num;
  cout << "Enter a number to check if it is prime: ";
  cin >> num;
  cout << num << " is " << (isPrime(num) ? "prime" : "not prime") << "\n";
  return 0;
}