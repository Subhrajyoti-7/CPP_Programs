#include <iostream>
using namespace std;

int duplicate(int arr[], int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return (i);
        }
    }
    return (-1);
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int a = 1;
    int start = 0;
    cout << "Duplicates are : ";
    while (a)
    {
        int j = duplicate(arr, start, size);
        if (j != (-1))
        {
            cout << arr[j] << " ";
            start = j + 2;
        }
        else
        {
            a = 0;
        }
    }
    return 0;
}