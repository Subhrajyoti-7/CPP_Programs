#include <iostream>

using namespace std;

class HCF
{
private:
    int num1, num2;

public:
    int findHcf(int a, int b)
    {
        int small, large, hcf;
        if (num1 >= num2)
        {
            large = num1;
            small = num2;
        }
        else
        {
            large = num2;
            small = num1;
        }

        for (int i = small; i >= 1; i--)
        {
            if (large % i == 0 && small % i == 0)
            {
                hcf = i;
                break;
            }
        }

        return (hcf);
    }
};

int main()
{
    HCF result;
    int ans;
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    ans = result.findHcf(a, b);
    cout << ans;
    return (0);
}