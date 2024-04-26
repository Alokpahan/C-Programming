#include <iostream>
using namespace std;
int Minimum(int a[], int n)
{
    int mn = a[0];             // initializing minimum
    for (int i = 0; i < n; i++) // complexity O(n)
    {
        mn = min(mn, a[i]); // everytime storing the minimum among the current minimum and the current element
    }
    return mn;
}
int Maximum(int a[], int n)
{
    int mx = a[0];             // initializing maximum
    for (int i = 0; i < n; i++) // complexity O(n)
    {
        mx = max(mx, a[i]); // everytime storing the maximum among the current maximum and the current element
    }
    return mx;
}
int main()
{
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;
    int arr[n], i, pos;
    cout << "Enter the " << n << " Elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = Minimum(arr, n); // Calling a method to find the smallest element
    int mx = Maximum(arr, n); // Calling a method to find the largest element
    cout << "The Smallest element in the entered array is: " << mn<< endl;
    cout << "The Largest element in the entered array is : " << mx << endl;
    return 0;
}
