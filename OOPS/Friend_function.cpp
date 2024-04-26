#include <iostream>
using namespace std;
class integer
{
    int a, b;

public:
    void set_value()
    {
        cout << "Enter two number: \n";
        cin >> a >> b;
    }
    friend int mean(integer s);
};
int mean(integer s)
{
    return int(s.a + s.b) / 2.0;
}
int main()
{
    integer c;
    c.set_value();
    cout << "Mean value: " << mean(c);
    return 0;
}
