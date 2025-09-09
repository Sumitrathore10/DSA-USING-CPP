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
        int space = n - i;
        while (space)
        {
            cout << " " << " " << " ";
            space--;
        }
        int j = 1;
        int num = i;
        while (j <= i)
        {
            cout << " " << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}