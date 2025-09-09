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
        while (j <= i)
        {
            cout << " " << char(x + i + j - 2 ) << " ";
            j++;
            
        }
        cout << endl;
        i++;
    }

    return 0;
}