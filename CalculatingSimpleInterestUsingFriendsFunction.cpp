#include <iostream>
using namespace std;

class Time;
class PR
{
private:
    float principal;
    float rate;

public:
    void assign()
    {
        cout << "Enter Principal Amount : ";
        cin >> principal;
        cout << "Enter Rate percent : ";
        cin >> rate;
    }

    friend void simpleInterest(PR pr, Time t);
};

class Time
{
private:
    float time;

public:
    void assign()
    {
        cout << "Enter the time period : ";
        cin >> time;
    }

    friend void simpleInterest(PR pr, Time t);
};

void simpleInterest(PR pr, Time t)
{
    float SI;
    SI = (pr.principal * pr.rate * t.time) / 100;

    float Amount = SI + pr.principal;

    cout << "\nThe Simple Interest is : " << SI << endl;
    cout << "The Amount is : " << Amount;
}

int main()
{
    cout << "This program takes Principal, Rate and Time and calculates Simple Interest and Amount" << endl;
    PR pr;
    Time t;
    pr.assign();
    t.assign();
    simpleInterest(pr, t);
    return (0);
}