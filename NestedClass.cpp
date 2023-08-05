#include <iostream>
using namespace std;

class One
{
public:
    One()
    {
        cout << "One call" << endl;
    }

    void show()
    {
        cout << "BILEI" << endl;
    }
    class Two
    {
    public:
        Two()
        {
            cout << "Two calls" << endl;
        }
        void show()
        {
            cout << "KUKURA" << endl;
        }
    } B;
};

int main()
{
    One A;

    A.show();
    A.B.show();
    return 0;
}