#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the integer : ";
    cin >> n;

    int i = 0;

    while(i<31){
        int ans = pow(2,i);
        if (ans == n )
        {
            cout<<true;
        }
        i++;
    }
    return 0;
}