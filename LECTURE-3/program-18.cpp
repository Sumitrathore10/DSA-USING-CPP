#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <=n )
    {
        int space = i - 1;
        while (space)
        {
            cout << " " << " " << " ";
            space--;
        }
        int j = n - i + 1;
        int num = i;
        while (j)
        {
            cout << " " << num << " ";
            j--;
        }

        cout << endl;
        i++;
        
        
    }
    
    return 0;
}