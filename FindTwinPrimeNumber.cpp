#include <iostream>
using namespace std;

class TwinPrime
{
private:
    int start, end, size;
    // int arr[1];
    // int *p = arr;

public:
    void prime()
    {
        cout << "Enter the starting and ending number : ";
        cin >> start >> end;
        size = end - start + 1;
        int *p = new int[size];
        cout << "Enter : ";
        for (int i = 0; i < size; i++)
        {
            cin >> (p + i);
        }
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << *(p + i) << " ";
        }
    }
};

int main()
{
    TwinPrime obj;
    obj.prime();
    return (0);
}