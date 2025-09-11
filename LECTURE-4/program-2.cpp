#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    int a = 0, b = 1 , nextTerm = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;;
        nextTerm = a + b;
        
    }
    return 0;
}