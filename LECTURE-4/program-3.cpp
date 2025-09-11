#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 2;
    for (; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number";
            break;
        }

    }
    if (n == i)
    {
        cout << "Prime number";
    }
    

    return 0;
}