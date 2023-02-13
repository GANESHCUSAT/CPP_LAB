#include <iostream>
using namespace std;
class matrix
{
private:
    int **p;
    int row, col;

public:
    matrix(){};
    matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j] = value;
    }
    int & put_element(int i, int j)
    {
        return p[i][j];
    }
    ~matrix()
    {
        for (int i = 0; i < row; i++)
        {
            delete p[i];
        }
        delete p;
    }
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
int main()
{
    int m, n;
    cout << "enter the size of the matrix\n";
    cout << "row: ";
    cin >> m;
    cout << "column: ";
    cin >> n;
    matrix A(m, n);
    cout << "enter the matrix elements row by row:\n ";
    int i, j, value;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> value;
            A.get_element(i, j, value);
        }
    }
    cout << "entered matrix is:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A.put_element(i, j);
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}