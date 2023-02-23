#include <iostream>
using namespace std;
class class_2;
class class_1
{
private:
    int value1;

public:
    void input(void)
    {
        std::cout << "\nenter the value 1: ";
        std::cin >> value1;
    }
    void display(void)
    {
        std::cout << "\nvalue 1 = " << value1;
    }
    friend void exchange(class_1 &a, class_2 &b);
};
class class_2
{
private:
    int value2;

public:
    void input(void)
    {
        std::cout << "\nenter the value 2: ";
        std::cin >> value2;
    }
    void display(void)
    {
        std::cout << "\nvalue 2 = " << value2;
    }
    friend void exchange(class_1 &, class_2 &);
};
void exchange(class_1 &a, class_2 &b)
{
    int temp;
    temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}
int main()
{
    class_1 a;
    class_2 b;
    a.input();
    b.input();
    std::cout << "\nvalues before exchanging: ";
    a.display();
    b.display();
    exchange(a, b);
    std::cout << "\nvalues after exchanging: ";
    a.display();
    b.display();
    return 0;
}