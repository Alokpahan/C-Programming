#include <iostream>
using namespace std;
int main()
{
    int num1, num2, *ptr1, *ptr2, sum = 0;
    cout << "Enter two number: " << endl;
    cin >> num1 >> num2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    cout << "Sum of two numbers: " << sum << endl;
    return 0;
}