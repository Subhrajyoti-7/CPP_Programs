#include <iostream>
using namespace std;

void SortAscending(int array[], int arraySize)
{
    int a;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[j] < array[i])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}

void SortDescending(int array[], int arraySize)
{
    int a;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[j] > array[i])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}

void PrintArray(int array[], int arraySize)
{
    cout << "Your numbers are:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int arraySize, i;
    cout << "Enter how many numbers you want to store : ";
    cin >> arraySize;
    int array[arraySize];
    cout << "Enter " << arraySize << " numbers :" << endl;
    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    int a = 1;
    while (a)
    {
        a--;
        cout << "How would you like to sort your numbers : \n";
        cout << "1. Ascending order\n2. Descending order\n3. As it is" << endl;
        cout << "Enter your choice (1 or 2 or 3) : ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            SortAscending(array, arraySize);
            PrintArray(array, arraySize);
            break;

        case 2:
            SortDescending(array, arraySize);
            PrintArray(array, arraySize);
            break;

        case 3:
            PrintArray(array, arraySize);
            break;

        default:
            cout << "Enter a valid choice : ";
            a++;
        }
    }
}