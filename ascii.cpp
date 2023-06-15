// ASCII values displayed
#include <iostream>
using namespace std;
int main()
{
    const int CHAR_PER_LINE = 10;
    char current_char = '!';
    while (current_char != '-')
    {
        cout << current_char;
        if ((current_char - '!') % CHAR_PER_LINE == CHAR_PER_LINE - 1)
        {
            cout << endl;
        }
        current_char++;
    }
    cout << endl;
    return 0;
}