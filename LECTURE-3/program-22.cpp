#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;
    int i = 1;
    while (i <= N)
    {
        int space = N - i;
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
        int k = i-1;
        while (k)
        {
            cout << " " << k << " ";
            k--;
        }
        cout << endl;
        i++;
        
    }

    return 0;
}