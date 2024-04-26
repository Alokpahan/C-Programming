#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A (int x)
    {
        a = x;
    }
    void display()
    {
        cout << a <<" Opps is an intresting subject: "<< endl;
    }
};
int main()
{
    
    A obj (1);
    obj.display();
    return 0;
}