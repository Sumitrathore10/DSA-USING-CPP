#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the binary number : ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int rem = n%10;  
        ans = (ans * 10) + rem;
        i++;
        n = n/10;
        
    }
    cout<<ans;
    return 0;
}