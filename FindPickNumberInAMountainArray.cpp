#include <iostream>
using namespace std;

class Pick
{
private:
    int *arr;
    int size;
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
            cin >> *(arr + i);
        }
        cout << endl;
    }

    int findPick()
    {
        start = 0;
        end = size - 1;
        while (start < end)
        {
            mid = start + (end - start) / 2;
            if (arr[start] < arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return (arr[start]);
    }
};

int main()
{
    cout << "This program finds the pick number in a mountain array" << endl;
    cout << "======================================================" << endl;
    Pick mp;
    mp.assign();
    int ans = mp.findPick();
    cout << "The Pick number in the mountain array is : " << ans << endl;
    cout << "-------------------Program Ended------------------" << endl;
    return 0;
}