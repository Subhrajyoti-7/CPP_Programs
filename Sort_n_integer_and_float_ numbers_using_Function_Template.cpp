#include <iostream>
using namespace std;

template <class T>
void Sort(T arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] <= arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "The sorted array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size, *integer;
    float *decimal;
    cout << "How many numbers you want to store : ";
    cin >> size;
    integer = new int[size];
    decimal = new float[size];

    cout << "\nEnter " << size << " integer numbers" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an integer number : ";
        cin >> integer[i];
    }
    cout << "The given array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << integer[i] << " ";
    }
    cout << endl;
    Sort(integer, size);

    cout << "\nEnter " << size << " decimal numbers" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a decimal number : ";
        cin >> decimal[i];
    }
    cout << "The given array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << decimal[i] << " ";
    }
    cout << endl;
    Sort(decimal, size);

    delete integer, decimal;
    return (0);
}