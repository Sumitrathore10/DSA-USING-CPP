#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i= 1;

    while (i<=n)
    {
        int j = n-i+1;
        int num = 1; 
        while (j)
        {
            cout << "  " << num << "  ";
            num++;
            j--;
        }
        int k = i-1;
        while (k)
        {
            cout << "  " << "*" << "  ";
            k--;
        }

        int l = i-1;
        while (l)
        {
            cout << "  " << "*" << "  ";
            l--;
        }

        int m = n-i+1;
        int num2 = n-i+1;
        while (m)
        {
            cout << "  " << num2 << "  ";
            num2--;
            m--;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}