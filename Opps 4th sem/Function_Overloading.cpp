/* C++ program to find Volume using Function Overloading  */
#include <iostream>
using namespace std;
int vol(int a)
{
    return (a*a*a);
}
float vol(int r, int h)
{
    return (3.14 * r * r * h);
}
int vol(int l, int w, int h1)
{
    return (l * w * h1);
}
int main()
{
    int r, h, a, h1, w, l;
    float r1;
    cout << "Enter side of cube: ";
    cin >> a;
    cout << "Enter radius and height of a cylinder: ";
    cin >> r >> h;
    cout << "Enter length, width and height of rectangle: ";
    cin >> l >> w >> h1;
    cout << "\nVolume of cube is " << vol(a);
    cout << "\nVolume of cylinder is " << vol(r, h);
    cout << "\nVolume of Rectangle is " << vol(l, w, h1);
    return 0;
}
