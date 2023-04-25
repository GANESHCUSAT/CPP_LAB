#include <iostream>
using namespace std;
class vector
{
private:
    int i, j, k;

public:
    friend ostream &operator<<(ostream &out, vector &a);
    friend istream &operator>>(istream &in, vector &a);
    friend int operator*(vector &a, vector &b);
};
istream &operator>>(istream &in, vector &a)
{
    cout << "enter the i component: ";
    in >> a.i;
    cout << "enter the j component: ";
    in >> a.j;
    cout << "enter the k component: ";
    in >> a.k;
    return in;
}
ostream &operator<<(ostream &out, vector &a)
{
    out << a.i << "i";
    if (a.j < 0)
    {
        out << a.j << "j";
    }
    else
    {
        out << "+" << a.j << "j";
    }
    if (a.k < 0)
    {
        out << a.k << "k";
    }
    else
    {
        out << "+" << a.k << "k";
    }
    return out;
}
int operator*(vector &a, vector &b)
{
    int dotproduct;
    dotproduct =( a.i * b.i)+(a.j * b.j)+( a.k * b.k);
     
    return dotproduct;
}
int main()
{
    string option;
    int dp;
    do
    {
        cout << "enter two vectors to find thier dot product";
        vector v1, v2, v3;
        cout << "\nenter the components of vector 1\n";
        cin >> v1;
        cout << "\nenter the components of vector 2\n";
        cin >> v2;
        cout << "\ndisplaying vector1\n";
        cout << v1;
        cout << "\ndisplaying vector2\n";
        cout << v2;
        dp = v1 * v2;
        cout << "\ndot product of entered vectors is :\n";
        cout << dp;
        cout << "\ndo you want to continue with another set of complex numbers (Enter yes/no): ";
        cin >> option;
        if (option == "no")
        {
            cout << "***exited succesfully***";
        }
    } while (option == "yes");


    return 0;
}
