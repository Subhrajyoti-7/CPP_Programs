#include <iostream>
using namespace std;

void search(int arr[], int size, int key)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (key > arr[mid])
        {
            r = mid - 1;
        }
        else if (key < arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            cout << "The number is present in the list";
            break;
        }
    }
    if (l > r)
    {
        cout << "The number is not present in the list";
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int key = 1;
    search(arr, 5, key);
}