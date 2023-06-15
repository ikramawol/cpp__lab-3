//display number from 100 - 200 that are divisible by 5 or by 6 but not both
#include <iostream>
using namespace std;
int main() {
    int counter = 0;
    for(int i = 100; i <= 200; i++) {
        if ((i % 5 == 0) && (i % 6 == 0)) {
            continue;
        } else if ((i % 5 == 0) || (i % 6 == 0)) {
            cout << i << " ";
            counter++;
            if (counter % 10 == 0) {
                cout << endl;
            }
        }
    }
    return 0;
}