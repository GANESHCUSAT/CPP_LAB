#include <iostream>

class complex
{
private:
    float real, imag;

public:
    complex(){};
    complex(float);
    complex(float, float);
    complex sum(complex, complex);
    void show(void);
};
complex::complex(float x)
{
    real = x;
    imag = x;
}
complex::complex(float x, float y)
{
    real = x;
    imag = y;
}
complex complex::sum(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
void complex::show()
{
    std::cout << real << "+" << imag << "i";
}
int main()
{
    int real, imag;
    std::string choice;
    do
    {
        std::cout << "Enter the first complex number as real and imaginary respectively: ";
        std::cin >> real >> imag;
        complex a(real, imag);
        std::cout << "Enter the second complex number as real and imaginary respectively: ";
        std::cin >> real >> imag;
        complex b(real, imag);
        complex c;
        c = c.sum(a, b);
        std::cout << "Sum of the entered complex numbers is: ";
        c.show();
        std::cout << "\n\ndo you want to continue(enter yes/no): ";
        std::cin >> choice;
    } while (choice == "yes");
    return 0;
}