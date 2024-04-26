#include<iostream>
using namespace std;
int count=0;
class A
{
    public:
    A()
    {
        count ++;
        cout<<"\n Constructor message: No. of object created   "<<count;
    }
    ~A()
    {
        count--;
        cout<<"\n Destructor  message: No. of Object destroyed "<<count;
    }
};
int main()
{
    A obj;
    A obj1;
    A obj2;
}