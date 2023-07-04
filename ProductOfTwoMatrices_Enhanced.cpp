#include <iostream>

using namespace std;

class Product
{
private:
    int matrix[10][10];

public:
    void getvalue(int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter a number : ";
                cin >> matrix[i][j];
            }
        }
    }

    void show(int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void result(Product obj_1, Product obj_2, int row, int col, int col_1)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                matrix[i][j] = 0;
                for (int k = 0; k < col_1; k++)
                {
                    matrix[i][j] = matrix[i][j] + obj_1.matrix[i][k] * obj_2.matrix[k][j];
                }
            }
        }
    }
};

int main()
{
    int row_1, col_1;
    int row_2, col_2;
    cout << "Enter the row and column size of first matrix : ";
    cin >> row_1 >> col_1;
    cout << "\nEnter the row and column size of second matrix : ";
    cin >> row_2 >> col_2;
    Product matrix_1, matrix_2, matrix_3;
    cout << "Enter values to matrix-1" << endl;
    matrix_1.getvalue(row_1, col_1);
    cout << "Enter values to matrix-2" << endl;
    matrix_2.getvalue(row_2, col_2);
    cout << "Matrix-1" << endl;
    matrix_1.show(row_1, col_1);
    cout << "Matrix-2" << endl;
    matrix_2.show(row_2, col_2);
    matrix_3.result(matrix_1, matrix_2, row_1, col_2, col_1);
    cout << "Resultant Matrix" << endl;
    matrix_3.show(row_1, col_2);
    return (0);
}