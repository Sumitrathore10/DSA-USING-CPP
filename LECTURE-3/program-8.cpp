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
            cout << " " << x << " ";
            j++;
        }
        cout << endl;
        x++;
        i++;
    }

    return 0;
}