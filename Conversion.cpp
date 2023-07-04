#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, rem, ans = 0;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;
    int i = 0;
    num = num * (-1);
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = pow(10, i) * rem + ans;
        i++;
    }
    cout << ans;

    return (0);
}