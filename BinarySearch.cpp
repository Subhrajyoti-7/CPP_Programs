#include <iostream>
using namespace std;

class BinarySearch
{
private:
    int *arr;
    int start, end, mid, size;

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

    int search(int key)
    {
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] == key)
            {
                return 1;
            }

            if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return 0;
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
    cout << "This program searches a number in a given list of numbers" << endl;

    BinarySearch bins;

    bins.create();
    bins.assign();
    bins.showArray();

    int key;
    cout << "Which number you want to search : ";
    cin >> key;

    if (bins.search(key))
    {
        cout << key << " is present in the list" << endl;
    }
    else
    {
        cout << key << " is not present in the list" << endl;
    }

    return (0);
}