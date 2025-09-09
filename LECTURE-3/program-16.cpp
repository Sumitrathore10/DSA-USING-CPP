#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n - i;
        while (j)
        {
            cout << " " << "*" << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}