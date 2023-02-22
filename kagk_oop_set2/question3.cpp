#include <iostream>
using namespace std;
class vector
{
private:
    int i, j, k;

public:
    friend ostream &operator<<(ostream &out, vector &a);
    friend istream &operator>>(istream &in, vector &a);
    friend vector operator*(vector &a, vector &b);
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
vector operator*(vector &a, vector &b)
{
    vector temp;
    temp.i = a.i * b.i;
    temp.j = a.j * b.j;
    temp.k = a.k * b.k;
    return temp;
}
int main()
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
    v3 = v1 * v2;
    cout << "\ndot product of entered vectors is :\n";
    cout << v3;
    return 0;
}
