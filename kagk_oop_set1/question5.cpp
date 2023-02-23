#include <iostream>

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
    std::cout << "enter the size of the matrix\n";
    std::cout << "row: ";
    std::cin >> m;
    std::cout << "column: ";
    std::cin >> n;
    matrix A(m, n);
    std::cout << "enter the matrix elements row by row:\n ";
    int i, j, value;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cin >> value;
            A.get_element(i, j, value);
        }
    }
    std::cout << "entered matrix is:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << A.put_element(i, j);
            std::cout << " ";
        }
        std::cout << "\n";
    }
    return 0;
}