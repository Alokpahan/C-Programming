#include <iostream>
#include <string>
using namespace std;
class member
{
    char name[20], address[40];
    double p_number;
    int age;

public:
    int salary;
    void input()
    {
        cout << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Age  : ";
        cin >> age;
        cout << "Phone Number: ";
        cin >> p_number;
        cout << "Addresss :";
        cin >> address;
        cout << "salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone Number: " << p_number << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }
};
class employee : public member
{
    char specialization[20], department[20];

public:
    void input()
    {
        cout << endl;
        cout << "Enter Employee Details"<< endl;
        member::input();
        cout << "Specialization: ";
        cin >> specialization;
        cout << "Department: ";
        cin >> department;
    }
    void display()
    {
        cout << endl;
        cout << "Displaying Emplayee Details" << endl;
        member::display();
        cout << "Specialization: " << specialization << endl;
        cout << "Department: " << department << endl;
    }
    void print_salary()
    {
        cout << "Salary of the member is: " << salary << endl;
    }
};
class manager : public member
{
    char specialization[20], department[20];

public:
    void input()
    {
        cout << endl;
        cout << "Enter Manager Details"<< endl;
        member::input();
        cout << "Specialization: ";
        cin >> specialization;
        cout << "Department: ";
        cin >> department;
    }
    void display()
    {
        cout << endl;
        cout << "Displaying Manager Details" << endl;
        member::display();
        cout << "Specialization: " << specialization << endl;
        cout << "Department: " << department << endl;
    }
    void print_salary()
    {
        cout << "Salary of the member is: " << salary << endl;
    }
};
int main()
{
    employee e;
    manager m;
    e.input();
    m.input();
    e.display();
    e.print_salary();
    m.display();
    m.print_salary();
    return 0;
}
