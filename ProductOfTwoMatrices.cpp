#include <iostream>
using namespace std;

class Multiply
{
private:
    int row, col;
    int **mat;

public:
    void size(int r, int c)
    {
        row = r;
        col = c;
        mat = new int *[row];
        for (int i = 0; i < row; i++)
        {
            mat[i] = new int[col];
        }
    }

    void input()
    {
        cout << "Enter the elements to the matrix" << endl;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void show()
    {
        cout << "The matrix is :" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Multiply mul(Multiply B)
    {

        int rows = row;
        int cols = B.col;
        Multiply temp;
        temp.size(rows, cols);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < B.col; j++)
            {
                temp.mat[i][j] = 0;
                for (int k = 0; k < col; k++)
                {
                    temp.mat[i][j] = temp.mat[i][j] + mat[i][k] * B.mat[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{

    int r1, r2, c1, c2;
    cout << "Enter the row size of the matrix-A" << endl;
    cin >> r1;
    cout << "Enter the column size of the matrix-A" << endl;
    cin >> c1;
    cout << "Enter the row size of the matrix-B" << endl;
    cin >> r2;
    cout << "Enter the column size of the matrix-B" << endl;
    cin >> c2;

    if (c1 != r2)
    {
        cout << "Mulitplication can't performed" << endl;
    }
    else
    {
        Multiply A, B, C;

        A.size(r1, c1);
        A.input();
        B.size(r2, c2);
        B.input();
        A.show();
        B.show();
        C = A.mul(B);
        C.show();
    }

    return 0;
}