#include <iostream>
using namespace std;
int main()
{
    int a[50], i, n, large, small;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Input the array element: ";
    for (i = 0; i < n; ++i)
        cin >> a[i];
    large = small = a[0];
    for (i = 1; i < n; ++i)
    {
        if (a[i] > large)
            large = a[i];
        if (a[i] < small)
            small = a[i];
    }
    cout << "The smallest element is: " << small << endl;
    cout << "The largest element is: " << large << endl;
    return 0;
}