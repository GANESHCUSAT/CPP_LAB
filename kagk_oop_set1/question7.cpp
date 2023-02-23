#include <iostream>

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
    void sum(matrix &, matrix &);
    void mult(matrix &, matrix &);
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
    std::cout << "enter the size of the matrix\n";
    std::cout << "row: ";
    std::cin >> m;
    std::cout << "column: ";
    std::cin >> n;
    matrix a(m, n);
    std::cout << "enter the matrix elements row by row:\n ";
    int i, j, value;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cin >> value;
            a.get_element(i, j, value);
        }
    }
    return a;
}
void matrix::sum(matrix &a, matrix &b)
{
    if (a.row == b.row & a.col == b.col)
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
    else
    {
        std::cout << "invalid input";
    }
}
void matrix::mult(matrix &a, matrix &b)
{
    if (a.col == b.row)
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
    else
    {
        std::cout << "invalid input";
    }
}
void matrix::trace(matrix a)
{
    if (a.row == a.col)
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
        std::cout << "result= " << sum;
    }
    else
    {
        std::cout << "invalid input";
    }
}
void matrix::transpose(matrix a)
{
    matrix c(a.col, a.row);
    int value;
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
        {
            value = p[i][j];
            c.get_element(j,i,value);
        }
    }
    c.show();
}
void matrix::show()
{
    std::cout << "result is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << p[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    matrix a1, a2, a3, a4;
    int option;
    string choice;
    do
    {
        std::cout << "***MAIN MENU***\n";
        std::cout << "1. enter 1 for addition of two matrix\n2. enter 2 to multiply two matrix\n3. enter 3 to find the transpose of the matrix\n4. enter 4 to find the trace of the matrix.\n";
        std::cin >> option;
        if (option == 1)
        {
            matrix a1, a2, a3;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a1.sum(a2, a3);
        }
        else if (option == 2)
        {
            matrix a1, a2, a3, a4;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a4.mult(a2, a3);
        }
        else if (option == 3)
        {
            matrix m1, m2;
            m2 = m1.recieve();
            m2.transpose(m2);
        }
        else if (option == 4)
        {
            matrix a1, a2;
            a2 = a1.recieve();
            a2.trace(a2);
        }
        else
        {
            std::cout << "invalid input";
        }
        std::cout << "\n\ndo you want to continue(enter yes or no): ";
        std::cin >> choice;
    } while (choice == "yes");
    return 0;
}