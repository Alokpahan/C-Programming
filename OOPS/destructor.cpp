#include <iostream>
using namespace std;
int count = 0;
class A
{
public:
    A()
    {
        count++;
        cout << "Constructor messager: No. of object created   " << count << endl;
    }
    ~A()
    {
        count--;
        cout << "Destructor  message : No. of object destroyed " << count << endl;
    }
};
int main()
{
    A obj;
    A obj1;
    A obj2;
}