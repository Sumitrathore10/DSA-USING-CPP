// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (int i = 0; i <= n; i += 2)
//     {
//         cout << i << " ";

//         if (i & 1)
//         {
//             continue;
//         }

//         i++;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <=5; i++)
    {
        for (int j = i; i <= 5; i++)
        {
            cout<<i << "*" << j << endl;
        }
    }

    return 0;
}