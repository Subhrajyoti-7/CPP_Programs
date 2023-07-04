#include <iostream>
using namespace std;

class Sort
{
private:
    int *arr, size;

public:
    void assign()
    {
        cout << "How many numbers you want to store : ";
        cin >> size;
        arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cout << "Enter a number : ";
            cin >> arr[i];
        }
        cout << "Your numbers are successfully stored!!!" << endl;
    }

    void show()
    {
        cout << "The array is :" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    friend void sortArray(Sort A);
};

void sortArray(Sort A)
{
    int third;
    for (int i = 0; i < A.size; i++)
    {
        for (int j = 0; j < A.size; j++)
        {
            if (A.arr[j] < A.arr[i])
            {
                third = A.arr[i];
                A.arr[i] = A.arr[j];
                A.arr[j] = third;
            }
        }
    }
}

int main()
{
    cout << "This program sorts 'n' numbers in descending order" << endl;
    Sort A;
    A.assign();
    A.show();
    sortArray(A);
    cout << "\n\nAfter sorting the given numbers in descending number," << endl;
    A.show();
    return (0);
}