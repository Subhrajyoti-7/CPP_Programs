#include<iostream>
using namespace std ;

int main()
{
    int n;
    cout << "This program finds the sum and average of 'n' numbers" ;
    cout << "\nEnter the value of 'n' : ";
    cin >> n;
    int num[n],sum=0;
    cout << "Enter " << n << " numbers : " ;
    for(int i=0;i<n;i++)
    {
        cin >> num[i] ;
        sum = sum + num[i] ;
    }
    float average;
    average = (float)sum / n ;
    cout << "Sum is : " << sum << "\nAverage is : " << average ;
    return 0;
}
