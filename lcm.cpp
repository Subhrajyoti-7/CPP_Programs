#include <iostream>
using namespace std;

class LCM
{
private:
public:
    void result(int a, int b)
    {
        for (int i = 1; i <= (a * b); i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                cout << "LCM = " << a * b / i << endl;
                break;
            }
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    LCM obj;
    obj.result(a, b);
    return (0);
}