// C++ program to implement
// the above approach
#include <iostream>
using namespace std;

class Employee {
    int id;
    char name[30];

public:
    Employee() { cout << "Constructor Run\n"; }
    void getdata(); // Declaration of function
    void putdata(); // Declaration of function
};
void Employee::getdata()
{ // Defining of function
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}
void Employee::putdata()
{ // Defining of function
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}
int main()
{
    Employee emp[5]; // One member
    return 0;
}
