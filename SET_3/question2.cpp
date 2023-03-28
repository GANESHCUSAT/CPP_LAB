#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T add()
    {
        return (num1 + num2);
    }
    T subtract()
    {
        return (num1 - num2);
    }
    T multiply()
    {
        return (num1 * num2);
    }
    T divide()
    {
        return (num1 / num2);
    }
    void display_result(void)
    {
        cout << num1 << " + " << num2 << " = " << add() << "\n";
        cout << num1 << " - " << num2 << " = " << subtract() << "\n";
        cout << num1 << " * " << num2 << " = " << multiply() << "\n";
        cout << num1 << " / " << num2 << " = " << divide() << "\n";
    }
};
int main()
{
    int option, num1, num2;
    string choice;
    do
    {
        cout << "entrer the type of operation\n1 for integer operations\n2 for decimal operations\nenter: ";
        cin >> option;
        if (option == 1)
        {

            cout << "enter the two number:\n ";
            cin >> num1 >> num2;
            Calculator<int> c1(num1, num2);
            c1.display_result();
        }
        if (option == 2)
        {
            cout << "enter the two numbers:\n ";
            cin >> num1 >> num2;
            Calculator<float> c1(num1, num2);
            c1.display_result();
           
        }
        cout << "\nDo you want to continue(enter yes/no): ";
        cin >> choice;
    } while (choice == "yes");
    return 0;
}