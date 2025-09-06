// data types in c++

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5; // int is use for integer values and it take 4 bytes of memory
//     cout << " a is " << a << '\n';
//     int size = sizeof(a); // sizeof() is use to find the size of a variable in bytes
//     cout << " size of a is " << size << " bytes\n";

//     char b = 's'; // char is always use single quotes and it take 1 byte of memory
//     cout << " b is " << b << '\n';
//     cout << " size of b is " << sizeof(b) << " bytes\n";

//     string c = "sumit"; // string is always use double quotes and it take 24 bytes of memory
//     cout << " c is " << c << '\n';
//     cout << " size of c is " << sizeof(c) << " bytes\n";

//     bool d = true; // bool is always use true or false and return 1 or 0 respectively and it take 1 byte of memory
//     cout << " d is " << d << '\n';
//     cout << " size of d is " << sizeof(d) << " bytes\n";

//     float e = 1.2; // float is use for decimal values and it take 4 bytes of memory
//     cout << " e is " << e << '\n';
//     cout << " size of e is " << sizeof(e) << " bytes\n";

//     double f = 1.22; // double is use for decimal values and it take 8 bytes of memory
//     cout << " f is " << f << '\n';
//     cout << "size of f is "<<sizeof(f)<<" bytes\n";
//     return 0;
// }

// operators in c++

// Arithmatic operators: + - addition , - - substraction, * - multiplcation, / - divide, % - moduluo

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << 1 + 5 << endl; // it will give the sum of the addition

//     cout << 5 - 2 << endl; // it will give the difference of the subtraction

//     cout << 5 * 2 << endl; // it will give the product of the multiplication

//     cout << 5 / 2 << endl; // it will give the quotient of the division

//     cout << 5 % 2 << endl; // it will give the remainder of the division

//     return 0;
// }

// Relational operators: == - equal to, != - not equal to, > - greater than, < - less than, >= - greater than or equal to, <= - less than or equal to

#include <iostream>
using namespace std;

int main()
{
    cout << (5 == 2) << endl; // it will return false(0) because 5 is not equal to 2

    cout << (5 != 2) << endl; // it will return true(1) because 5 is not equal to 2. its also use for reverse the result.

    cout << (5 > 2) << endl; // it will return true(1) because 5 is greater than 2

    cout << (5 < 2) << endl; // it will return false(0) because 5 is not less than 2

    cout << (5 >= 2) << endl; // it will return true(1) because 5 is greater than or equal to 2

    cout << (5 <= 2) << endl; // it will return false(0) because 5 is not less than or equal to 2

    return 0;
}

// Logical operators: && - and, || - or, ! - not


