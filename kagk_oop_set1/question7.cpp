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
    int &put_element(int i, int j)
    {
        return p[i][j];
    }
    matrix recieve(void);
    void show(void);
    void sum(matrix, matrix);
    void mult(matrix, matrix);
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
void matrix::sum(matrix d, matrix b)
{
    matrix c(2, 2);
    int value;
    for (int i = 0; i < d.row; i++)
    {
        for (int j = 0; j < d.col; j++)
        {
            value = d.put_element(i, j) + b.put_element(i, j);
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
    a3 = a1.recieve();
    a4 = a1.recieve();
    a2.sum(a3, a4);
    return 0;
}