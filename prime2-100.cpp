// prime number between 2 and 100
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    int numPrimes = countPrimes(N);
    cout << "There are " << numPrimes << " primes between 2 and " << N << endl;
    return 0;
}