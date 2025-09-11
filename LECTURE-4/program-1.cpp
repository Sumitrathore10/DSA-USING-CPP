#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 0;i<=n;i++ )
    {
        sum = sum + i;
    }

    cout << "The sum of 0  to  n is :" << sum <<endl;
    
    return 0;
}