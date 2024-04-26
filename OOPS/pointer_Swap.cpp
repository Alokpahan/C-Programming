#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
int main()
{
    int a = 10, b = 20;
    cout << "BEFORE SWAP:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "AFTER SWAP:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}