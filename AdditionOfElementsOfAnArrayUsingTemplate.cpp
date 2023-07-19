#include <iostream>
using namespace std;

template <class T>
T Sum(T *arr, int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

template <class T>
void show(T *arr, int n)
{
    cout << "Array elements are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, res1;
    float b[] = {2.3, 4.2, 5.5, 1.7, 0.5, 3.21}, res2;

    res1 = Sum(a, 5);
    res2 = Sum(b, 6);

    show(a, 5);
    cout << "Sum is : " << res1 << endl;
    show(b, 6);
    cout << "Sum is : " << res2 << endl;

    return 0;
}