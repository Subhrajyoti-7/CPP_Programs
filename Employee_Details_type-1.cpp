#include <iostream>
using namespace std;

struct Employee
{
    int id, age;
    char name[30];
    float salary;

    void Read()
    {
        int i = 1;
        cout << "Enter details of Employee - " << i << " : " << endl;
        cout << "Enter the ID no. of the Employee : ";
        cin >> id;
        cout << "Enter the Name of the Employee : ";
        cin.getline(name, 30);
        cout << "Enter the age of the Employee : ";
        cin >> age;
        cout << "Enter the Salary of the Employee : ";
        cin >> salary;
        i++;
    }

    void Show()
    {
        int i = 1;
        cout << "Details of Employee - " << i << endl;
        cout << "-----------------------" << endl;
        cout << "Employee ID\t: " << id << endl;
        cout << "Name\t\t: " << name << endl;
        cout << "Age\t\t: " << age << endl;
        cout << "Salary\t\t: " << salary << endl
             << endl;
        i++;
    }
};
typedef struct Employee Employee;

int main()
{
    cout << "This program take Employee details and display them." << endl;
    cout << "How many Employee Details you want to enter : ";
    int noOfEmployee, i;
    cin >> noOfEmployee;
    Employee emp[noOfEmployee];

    // for (i = 0; i < noOfEmployee; i++)
    // {
    //     emp[i].Read();
    // }
    emp[i].Read();

    cout << "Employee Details" << endl;
    cout << "================" << endl
         << endl;
    for (i = 0; i < noOfEmployee; i++)
    {
        emp[i].Show();
    }

    cout << "\n---------------Program Ended---------------" << endl;
    return (0);
}