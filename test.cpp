#include <iostream>
using namespace std;

class Number
{
public:
    virtual void Read(int, int) = 0;
    virtual void Result() = 0;
};

class Add : public Number
{
    int a, b;

public:
    void Read(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void Result()
    {
        cout << "The addition is : " << a + b << endl;
    }
};

int main()
{
    Add A;
    A.Read(3, 4);
    A.Result();
    return (0);
}