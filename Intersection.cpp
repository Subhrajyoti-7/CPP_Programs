#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 3, 3, 4, 5};
    int b[] = {1, 3, 4, 4, 5, 6};
    int s1 = sizeof(a) / sizeof(a[0]);
    int s2 = sizeof(b) / sizeof(b[0]);

    int i = 0, j = 0;
    while (i < s1 && j < s2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    return (0);
}