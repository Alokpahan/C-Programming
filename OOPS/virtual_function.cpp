#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "BASE CLASS" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "DERIVED CLASS" << endl;
    }
};
int main()
{
    base bobj;
    derived dobj;
    base *bptr;
    bptr = &bobj;
    bptr->show();
    bptr = &dobj;
    bptr->show();
    return 0;
}