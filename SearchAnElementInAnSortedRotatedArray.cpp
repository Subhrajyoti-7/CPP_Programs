#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int findPivot(int arr[], int start, int end)
{
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    cout << "This program searches an element in an sorted rotated array" << endl;
    int size = 7, arr[] = {5, 7, 8, 1, 2, 3, 4};
    int key, start, end;
    start = 0;
    end = size - 1;
    key = 7;

    int pivot = findPivot(arr, start, end);

    if (key > arr[pivot] && key < arr[end])
    {
        start = pivot;
    }
    else
    {
        end = pivot - 1;
    }

    int result = binarySearch(arr, start, end, key);

    if (result == -1)
    {
        cout << "Key not found!!!" << endl;
    }
    else
    {
        cout << "The element is at index : " << result << endl;
    }

    return (0);
}