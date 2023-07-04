#include <iostream>
#include <iomanip>
using namespace std;

class Addition
{
private:
    int *arr, size;
    int sum = 0;

public:
    void assign();
    void show();
    friend void summation(Addition);
};

void Addition ::assign()
{
    cout << "How many numbers you want to enter : ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number : ";
        cin >> arr[i];
    }
}

void summation(Addition add)
{
    for (int i = 0; i < add.size; i++)
    {
        add.sum = add.sum + add.arr[i];
    }
    cout << "\nAddition is : " << add.sum;
}

void Addition ::show()
{
    cout << "\nThe numbers are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    Addition add;
    cout << "This program takes 5 integers and shows the sum of them" << endl;
    add.assign();
    add.show();
    summation(add);

    cout << "\n================Program Ended===================\n";
    return (0);
}