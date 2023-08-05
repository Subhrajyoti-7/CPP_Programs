#include <iostream>
using namespace std;

class AddSub
{
    int **mat;
    int row, col;

public:
    void assign()
    {
        cout << "Enter the order of the matrices (m*n)" << endl;
        cout << "Enter the row size (m) : ";
        cin >> row;
        cout << "Enter the column size (n) : ";
        cin >> col;

        mat = new int *[row];

        for (int i = 0; i < row; i++)
        {
            mat[i] = new int[col];
        }

        cout << "\nEnter the values to the matrix" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter a number : ";
                cin >> mat[i][j];
            }
        }
    }

    AddSub operator+(AddSub obj)
    {
        AddSub result;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                result.mat[i][j] = mat[i][j] + obj.mat[i][j];
            }
        }
        return result;
    }

    friend AddSub operator-(AddSub obj1, AddSub obj2)
    {
        AddSub result;
        for (int i = 0; i < obj1.row; i++)
        {
            for (int j = 0; j < obj1.col; j++)
            {
                result.mat[i][j] = obj1.mat[i][j] - obj2.mat[i][j];
            }
        }
        return (result);
    }

    void show()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    cout << "This program calculates the addition and subtraction of two matrices" << endl;
    cout << "====================================================================" << endl
         << endl;
    AddSub M1, M2, A, S;

    cout << "Creating first matrix" << endl;
    cout << "---------------------" << endl;
    M1.assign();
    M1.show();

    cout << "Creating first matrix" << endl;
    cout << "---------------------" << endl;
    M2.assign();
    M2.show();

    A = M1 + M2;
    S = M1 - M2;

    A.show();
    S.show();

    cout << "-------------------- Program Ended --------------------" << endl;

    return (0);
}