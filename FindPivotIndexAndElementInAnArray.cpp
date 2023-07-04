#include <iostream>
using namespace std;

class Pivot
{
private:
    int *arr, size;
    int start, mid, end;

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
        cout << "Your numbers are successfully stored" << endl;
    }

    void findPivot()
    {
        start = 0;
        end = size - 1;
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
        cout << "\nThe pivot index is\t: " << start << endl;
        cout << "The pivot element is\t: " << arr[start] << endl;
    }
};

int main()
{
    cout << "This program finds the pivot index and pivot element in an array" << endl;
    cout << "================================================================" << endl;

    Pivot pt;
    pt.assign();
    pt.findPivot();

    cout << "-----------------------Program Ended-----------------------" << endl;
    return 0;
}