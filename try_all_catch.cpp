#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
using namespace std;

long Fact(int n)
{
    long factorial = n;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial = factorial * Fact(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    try
    {
        if (n < 0)
        {
            throw n;
        }
        long fact = Fact(n);
        cout << "The factorial of " << n << " is " << fact << endl;
    }
    catch (...) // All catch statement
    {
        cout << n << " is negative !!!" << endl;
    }
    return 0;
}