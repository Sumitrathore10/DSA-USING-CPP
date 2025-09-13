#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the integer : ";
    cin >> n;

    int i = 0;
    int ans = 1;
    while(i<31){
       
        if (ans == n )
        {
            cout<<true;
        }
        ans = ans*3;
        i++;
    }
    
    return 0;
}