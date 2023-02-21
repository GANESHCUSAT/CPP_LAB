#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    void input(void);
    void display(void);
    friend complex operator+(complex, complex);
    friend complex operator*(complex, complex);
};
void complex::input()
{
    cout << "\nEnter the real part of the complex number: ";
    cin >> real;
    cout << "Enter the imag part of the complex  number: ";
    cin >> imag;
}
void complex::display()
{
    if (imag < 0)
    {
        cout << real << " " << imag << "i" << endl;
    }
    else
    {
        cout << real << " + " << imag << "i" << endl;
    }
}
complex operator+(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
complex operator*(complex a, complex b)
{
    complex c;
    c.real = (a.real * b.real) - (a.imag * b.imag);
    c.imag = (a.real * b.imag) + (b.real * a.imag);
    return c;
}
int main()
{
    complex c1, c2, result;
    int choice, i;
    string option;

    do
    {
        cout << "\nnter the required details of complex number1: \n";
        c1.input();
        cout << "\nEnter the required details of complex number2: \n";
        c2.input();
        i = 1;
        while (i == 1)
        {
            cout << "\nEnter 1 to find the sum of the two complex numbers.\n";
            cout << "\nEnter 2 to find the product of the two complex numbers.\n";
            cout << "\nEnter your choice : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                result = c1 + c2;
                cout << "sum of the Entered complex numbers is: ";
                result.display();
                break;
            case 2:
                result = c1 * c2;
                cout << "product of the Entered complex numbers is: ";
                result.display();
                break;
            default:
                cout << "invalid input";
            }
            cout << "\nEnter 1 to continue the operations:";
            cout << "\nEnter any other number to exit:\n";
            cin >> i;
        }
        cout << "\ndo you want to continue with another set of complex numbers (Enter yes/no): ";
        cin >> option;

    } while (option == "yes");
    return 0;
}
