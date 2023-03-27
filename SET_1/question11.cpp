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
        std::cout << "\nEnter the value 1: ";
        std::cin >> value1;
    }
    void display(void)
    {
        std::cout << "\nValue 1 = " << value1;
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
        std::cout << "\nEnter the value 2: ";
        std::cin >> value2;
    }
    void display(void)
    {
        std::cout << "\nValue 2 = " << value2;
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
    std::cout << "\nValues before exchanging: ";
    a.display();
    b.display();
    exchange(a, b);
    std::cout << "\nValues after exchanging: ";
    a.display();
    b.display();
    return 0;
}