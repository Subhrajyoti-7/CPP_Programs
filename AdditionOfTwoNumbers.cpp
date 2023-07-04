#include<iostream>
using namespace std;

int main ()
{
    int num1,num2;
    cout << "This program adds two numbers and display their sum" ;
    cout << "\nEnter Two numbers : " ;
    cin >> num1 >> num2 ;
    int sum = num1 + num2 ;
    cout << num1 << " + " << num2 << " = " << sum ;
    return (0);
}