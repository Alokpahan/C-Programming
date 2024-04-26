#include <iostream>
using namespace std;
class student
{
    string s;

public:
    student(string s)
    {
        cout << s;
    }
};
int main()
{
    student obj("OOps is an interesting subject");
    return 0;
}