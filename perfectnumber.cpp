// perfect number
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "The proper divisors of " << num << " are: ";
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    if (sum == num)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
    {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}