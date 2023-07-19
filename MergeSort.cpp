#include <iostream>
using namespace std;

int merge(int arr[], int l, int mid, int r)
{
    int m = mid - l + 1;
    int n = r - mid;
    int i = 0, j = 0, k = l;

    int A[m], B[n];

    while (i < m)
    {
        A[i] = arr[l + i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        B[i] = arr[mid + 1 + i];
        i++;
    }
    i = 0;

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            arr[k] = A[i];
            i++;
        }
        else
        {
            arr[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        arr[k] = A[i];
        i++;
        k++;
    }
    while (j < n)
    {
        arr[k] = B[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {2, 5, 1, 8, 4, 3, 7};
    mergeSort(arr, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}