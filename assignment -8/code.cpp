#include <iostream>
#include <string>
using namespace std;

class BasicInfo
{
private:
    string name;
    int age;

public:
    void acceptBasicInfo()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void dispBasicInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class deptInfo
{
private:
    string nameofdept;
    string natureofwork;

public:
    void acceptDeptInfo()
    {
        cout << "Enter department: ";
        cin >> nameofdept;
        cout << "Enter nature of work: ";
        cin >> natureofwork;
    }

    void dispDeptInfo()
    {
        cout << "Department: " << nameofdept << endl;
        cout << "Nature of work: " << natureofwork << endl;
    }
};

class Employee : public BasicInfo, public deptInfo
{
public:
    void display()
    {
        dispBasicInfo();
        dispDeptInfo();
    }
};

int main()
{
    Employee e;

    e.acceptBasicInfo();
    e.acceptDeptInfo();
    e.display();

    return 0;
}
