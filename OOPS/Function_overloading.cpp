#include <iostream>
using namespace std;
void display(int value1, double value2)
{
    cout << "Integer number: " << value1;
    cout << " and Double number : " << value2 << endl;
}
void display(double value)
{
    cout << "Double number: " << value << endl;
}
void display(int value)
{
    cout << "Integer Number: " << value << endl;
}
int main()
{
    int a = 5;
    double b = 2.4;
    display(a);
    display(b);
    display(a, b);
    return 0;
}