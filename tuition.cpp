// Tuition cost in 10 years and total cost in four years
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year = 1;
    double tuition = 10000.0, total_cost = 0.0;

    while (year <= 10)
    {
        tuition *= 1.05;
        year += 1;
    }

    cout << "The tuition in ten years will be $" << fixed << setprecision(2) << tuition << endl;

    for (int i = 10; i <= 13; ++i)
    {
        total_cost += tuition * pow(1.05, i - 10);
    }

    cout << "The total cost of four years worth of tuition starting ten years from now will be $" << fixed << setprecision(2) << total_cost << endl;

    return 0;
}
