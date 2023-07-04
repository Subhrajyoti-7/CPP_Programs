#include <iostream>

using namespace std;

class HCF
{
private:
    int num1, num2;
    int n;

public:
    void findHcf()
    {
        cout << "How many numbers HCF you want to calculate : ";
        cin >> n;
        int num[n];
        cout << "\nEnter the numbers : ";
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        // Finding Smaller nummber
        int smaller;
        smaller = num[0];
        for (int i = 1; i < n; i++)
        {
            if (num[i] < smaller)
            {
                smaller = num[i];
            }
        }

        // Finding the HCF
        int count;
        for (int i = smaller; i >= 1; i--)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (num[j] % i == 0)
                {
                    count++;
                }
            }
            if (count == n)
            {
                cout << "The HCF is " << i;
                break;
            }
        }
    }
};

int main()
{
    HCF hcf;
    hcf.findHcf();
    return (0);
}