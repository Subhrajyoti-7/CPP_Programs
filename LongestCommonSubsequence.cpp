#include <iostream>
using namespace std;

class LCS
{
    int *arr, size;

public:
    LCS(int a)
    {
        size = a;
        arr = new int[size];
    }

    void Read()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter a number : ";
            cin >> arr[i];
        }
    }

    void Show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    return (0);
}