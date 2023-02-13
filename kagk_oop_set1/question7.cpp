#include <iostream>
using namespace std;
class matrix
{
private:
    int row, col, m, n;
    int **p;

public:
    matrix(){};
    matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j] = value;
    }
    int put_element(int i, int j)
    {
        return p[i][j];
    }
    matrix recieve(void);
    void show(void);
    void sum(matrix, matrix);
    void mult(matrix, matrix);
    void transpose(matrix);
    void trace(matrix);
};
matrix::matrix(int x, int y)
{
    row = x;
    col = y;
    p = new int *[row];
    for (int i = 0; i < row; i++)
    {
        p[i] = new int[col];
    }
}
matrix matrix::recieve()
{
    cout << "enter the size of the matrix\n";
    cout << "row: ";
    cin >> m;
    cout << "column: ";
    cin >> n;
    matrix a(m, n);
    cout << "enter the matrix elements row by row:\n ";
    int i, j, value;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> value;
            a.get_element(i, j, value);
        }
    }
    return a;
}
void matrix::sum(matrix a, matrix b)
{
    matrix c(a.row, a.col);
    int value;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
        {
            value = a.put_element(i, j) + b.put_element(i, j);
            c.get_element(i, j, value);
        }
    }
    c.show();
}
void matrix::mult(matrix a, matrix b)
{
    matrix c(a.row, b.col);
    int value = 0;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < b.col; j++)
        {
            int value = 0;
            for (int k = 0; k < a.col; k++)
            {
                value = value + a.put_element(i, k) * b.put_element(k, j);
                c.get_element(i, j, value);
            }
        }
    }
    c.show();
}
void matrix::trace(matrix a)
{
    int sum = 0;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
        {
            if (i == j)
            {
                sum = sum + p[i][j];
            }
        }
    }
    cout << sum;
}
void matrix::transpose(matrix a)
{
    matrix c(a.col, a.row);
    int value;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
        {
            value = p[j][i];
            c.get_element(i, j, value);
        }
    }
    c.show();
}
void matrix::show()
{
    cout << "result is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    matrix a1, a2, a3, a4;
    int option;
    string choice;
    do
    {
        cout << "***MAIN MENU***\n";
        cout << "1. enter 1 for addition of two matrix\n2. enter 2 to multiply two matrix\n3. enter 3 to find the transpose of the matrix\n4. neter 4 to find the trace of the matrix.\n";
        cin >> option;
        if (option == 1)
        {
            matrix a1, a2, a3;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a1.sum(a2, a3);
        }
        else if (option == 2)
        {
            matrix a4, a5, a6;
            a5 = a4.recieve();
            a6 = a4.recieve();
            a4.mult(a5, a6);
        }
        else if (option == 3)
        {
            matrix a7, a8;
            a8 = a7.recieve();
            a7.transpose(a8);
        }
        else if (option == 4)
        {
            matrix a9, a10;
            a10 = a9.recieve();
            a9.trace(a10);
        }
        else
        {
            cout << "invalid input";
        }
        cout << "\n\ndo you want to continue(enter yes or no): ";
        cin >> choice;
    } while (choice == "yes");
    return 0;
}