#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    char x = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            cout << " " << char(x + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}