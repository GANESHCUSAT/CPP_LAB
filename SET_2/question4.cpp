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
    matrix operator+(matrix &);
    matrix operator*(matrix &);
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
matrix matrix::operator+(matrix &b)
{
    if (row == b.row & col == b.col)
    {
        matrix c(row, col);
        int value;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                value = put_element(i, j) + b.put_element(i, j);
                c.get_element(i, j, value);
            }
        }
        return c;
    }
    else
    {
        cout << "invalid input";
    }
}
matrix matrix::operator*(matrix &b)
{
    if (col == b.row)
    {
        matrix c(row, b.col);
        int value = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < b.col; j++)
            {
                int value = 0;
                for (int k = 0; k < col; k++)
                {
                    value = value + put_element(i, k) * b.put_element(k, j);
                    c.get_element(i, j, value);
                }
            }
        }
        return c;
    }
    else
    {
        cout << "invalid input";
    }
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
        cout << "1. enter 1 for addition of two matrix\n2. enter 2 to multiply two matrix\n";
        cin >> option;
        if (option == 1)
        {
            matrix a1, a2, a3;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a4 = a2 + a3;
            a4.show();
        }
        else if (option == 2)
        {
            matrix a1, a2, a3, a4;
            a2 = a1.recieve();
            a3 = a1.recieve();
            a4 = a2 + a3;
            a4.show();
        }
        else
        {
            cout << "invalid input";
        }
        cout << "\n\ndo you want to continue(enter yes or no): ";
        cin >> choice;
         if(choice =="no")
        {
            std::cout<<"***exited succesfully***";
        }
    } while (choice == "yes");
    return 0;
}