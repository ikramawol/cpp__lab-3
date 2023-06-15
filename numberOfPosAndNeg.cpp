// Number of positive and negative integers
#include <iostream>
using namespace std;
int main()
{
    int num, countPos = 0, countNeg = 0, sum = 0, count = 0;
    float average = 0.0;
    cout << "Enter integers, one per line. Enter 0 to end." << endl;
    cin >> num;
    while (num != 0)
    {
        if (num > 0)
        {
            countPos++;
            sum += num;
            count++;
        }
        else if (num < 0)
        {
            countNeg++;
            sum += num;
            count++;
        }
        cin >> num;
    }
    if (count > 0)
    {
        average = (float)sum / count;
    }
    cout << "Positive numbers: " << countPos << endl;
    cout << "Negative numbers: " << countNeg << endl;
    cout << "Total: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}