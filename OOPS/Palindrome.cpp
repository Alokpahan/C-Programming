#include <iostream>
#include <string.h>
using namespace std;
class palindrome
{
public:
    string inp = "", rev = "";
    void check(string inp)
    {
        for (int i = inp.length() - 1; i >= 0; i--)

        {
            if (inp[i] >= 65 && inp[i] <= 90)
                inp[i] = inp[i] + 32;
            rev += inp[i];
        }
        if (rev == inp)
            cout << "String is Palindrome";
        else
            cout << "String is not a Palindrome";
    }
};
int main()
{
    string str;
    cout << "Enter a string : \n";
    cin >> str;
    palindrome s;
    s.check(str);
    return 0;
}
