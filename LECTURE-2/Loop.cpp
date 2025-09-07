// loop : A loop is a programming construct that repeats a block of code multiple times until a given condition is false.

// while loop : A while loop is a control flow statement that allows code to be executed repeatedly based on a given boolean condition. The while loop can be thought of as a repeating if statement.

// question : 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     int i = 0;

//     while (i<=n)
//     {
//         cout << i << endl;
//         i++;
//     }

//     return 0;
// }

// question : 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;
//     while (i <= n)
//     {

//         sum = sum + i;
//         i++;
//     }
//     cout << sum << endl;

//     return 0;
// }

// quetion : 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     int i = 1;
//     int sum = 0;

//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;

//         }
//         i++;
//     }

//     cout << sum << endl;

//     return 0;
// }

// question : 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int f;
//     cout << "Enter a temp in frenhite: ";
//     cin >> f;

//     int c = (f - 32)*5/9;

//     cout << "The temp in celcius is : " << c << endl;
//     return 0;
// }

// question : 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     int i = 2;
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             cout << "N is not a prime number" << endl;
//             break;
//         }
//         i++;
//     }
//     if (i == n)
//     {
//         cout << "N is a prime number" << endl;
//     }

//     return 0;
// }

// question : 6

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     int i = 1;
    

//     while (i<=n)
//     {
//         int j = 1;
//         while (j<=n)
//         {
//             cout<< "*";
//             j++;
//         }
//         cout<< endl;
//         i++;  
//     }
    
//     return 0;
// }

// question : 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     int i=1;
//     while (i<=n)
//     {
//         int j = 1;
//         while (j <=n)
//         {
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;      
//     }
    
//     return 0;
// }

// question : 8

