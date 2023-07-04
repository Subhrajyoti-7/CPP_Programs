#include <iostream>
using namespace std;

class BinarySearch
{
private:
    int *arr;
    int start, end, mid, size;
    int ans;

public:
    void create()
    {
        cout << "Enter how many numbers you want to store : ";
        cin >> size;
        arr = new int[size];
    }

    void assign()
    {
        start = 0;
        end = size - 1;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter a number : ";
            cin >> arr[i];
        }
        cout << "Your numbers has been successfully stored!!!" << endl;
    }

    int firstOcc(int key)
    {
        ans = -1;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == key)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }

    int lastOcc(int key)
    {
        start = 0;
        end = size - 1;
        ans = -1;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == key)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }

    void showArray()
    {
        cout << "Your numbers are : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    cout << "This program finds the first and last occurrence of a given number in a given list of numbers" << endl;

    BinarySearch bins;

    bins.create();
    bins.assign();
    bins.showArray();

    int key;
    cout << "Which number you want to search : ";
    cin >> key;

    cout << "The First occurrence of " << key << " is at index : " << bins.firstOcc(key) << endl;
    cout << "The Last occurrence of " << key << " is at index  : " << bins.lastOcc(key) << endl;

    return (0);
}