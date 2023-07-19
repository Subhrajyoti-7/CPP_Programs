#include <iostream>
using namespace std;

template <class T>
class LargeSmall
{
    T a, b, c;

public:
    void assign(T a, T b, T c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    T Large()
    {
        if (a > b && a > c)
        {
            return a;
        }
        else if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }

    T Small()
    {
        if (a < b && a < c)
        {
            return a;
        }
        else if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
};

int main()
{
    LargeSmall<int> A;
    LargeSmall<float> B;
    LargeSmall<char> C;

    int i1, i2, i3;
    float f1, f2, f3;
    char c1, c2, c3;

    cout << "Enter 3 integers : ";
    cin >> i1 >> i2 >> i3;
    A.assign(i1, i2, i3);
    int L = A.Large();
    int S = A.Small();
    cout << "Large integer = " << L << endl;
    cout << "Small integer = " << S << endl
         << endl;

    cout << "Enter 3 floats : ";
    cin >> f1 >> f2 >> f3;
    B.assign(f1, f2, f3);
    float x = B.Large();
    float y = B.Small();
    cout << "Large float = " << x << endl;
    cout << "Small float = " << y << endl
         << endl;

    cout << "Enter 3 characters : ";
    cin >> c1 >> c2 >> c3;
    C.assign(c1, c2, c3);
    char e = C.Large();
    char f = C.Small();
    cout << "Large character = " << e << endl;
    cout << "Small character = " << f << endl;

    return (0);
}