#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = n % 10;
    
    int remain = n / 10;

    int b = remain % 10;

    int c = remain / 10;

    int sum = a + b + c;
    int product = a * b * c;

    cout << "Product - Sum is " << product - sum << endl;
    return 0;
}