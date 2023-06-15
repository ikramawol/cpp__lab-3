//Maximum and Minimum value from a list of numbers entered from keyboard
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxValue = arr[0];
    int minValue = arr[0];

    for(int i = 1; i < num; i++) {
        if(arr[i] > maxValue) {
            maxValue = arr[i];
        }
        if(arr[i] < minValue) {
            minValue = arr[i];
        }
    }

    cout << "Max value: " << maxValue << endl;
    cout << "Min value: " << minValue << endl;

    return 0;
}