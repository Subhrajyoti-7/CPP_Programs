#include <iostream>
using namespace std;

class SumAverage
{
private:
    float *arr;
    int size;
    float sum = 0.0, average;

public:
    SumAverage(int size)
    {
        this->size = size;
        arr = new float[size];
    }

    ~SumAverage()
    {
        delete arr;
    }

    void assign()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter a number : ";
            cin >> arr[i];
        }
        cout << endl;
    }

    float Sum()
    {
        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }
        return (sum);
    }

    float Average()
    {
        average = sum / size;
        return (average);
    }
};

int main()
{
    cout << "\nThis takes 'n' numbers and calculates thier sum and average" << endl;
    cout << "===========================================================\n"
         << endl;
    cout << "Enter the value of 'n' : ";
    int n;
    cin >> n;
    SumAverage SA(n);
    SA.assign();
    float sum = SA.Sum();
    float avg = SA.Average();

    cout << "The Sum of these numbers is\t: " << sum << endl;
    cout << "The Average of these numbers is\t: " << avg << endl;
    cout << "\n------------------Program Ended-------------------\n"
         << endl;
    return (0);
}