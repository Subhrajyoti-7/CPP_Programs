#include <iostream>
#include <iomanip>
using namespace std;

class QuickSort
{
private:
    int *arr = 0;
    int arrSize;

public:
    int size()
    {
        cout << "How many numbers you want to enter : ";
        cin >> arrSize;
        arr = new int[arrSize];
        return (arrSize);
    }

    void getvalues()
    {
        cout << "Enter " << arrSize << " numbers to store." << endl;
        for (int i = 0; i < arrSize; i++)
        {
            cout << "Enter a number (And press enter) : ";
            cin >> arr[i];
        }
        cout << "\nYour given numbers are stored successfully!!!" << endl;
    }

    int partition(int l, int r)
    {
        int pivot = arr[l];
        int i = l, j = r;
        while (i < j)
        {
            do
            {
                i++;
            } while (arr[i] <= pivot);

            do
            {
                j--;
            } while (arr[j] > pivot);
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[j], arr[l]);
        return (j);
    }

    void sort(int l, int r)
    {
        if (l < r)
        {
            int j = partition(l, r);
            sort(l, j - 1);
            sort(j + 1, r);
        }
    }

    void show()
    {
        for (int i = 0; i < arrSize; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    cout << "This program takes some numbers and sort them in ascending order." << endl;
    QuickSort A;
    int size = A.size();
    A.getvalues();
    cout << "Your given numbers are :" << endl;
    cout << setw(10);
    A.show();
    A.sort(0, size - 1);
    cout << "The sorted numbers are :" << endl;
    cout << setw(10);
    A.show();

    return (0);
}