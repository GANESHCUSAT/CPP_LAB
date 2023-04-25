#include <iostream>
using namespace std;
class exp
{
private:
    int a, b;

public:
    exp() {}
    exp(int x, int y)
    {
        a = x;
        b = y;
    }
    double divide()
    {
        double result = 0;
        try
        {
            if (b == 0)
                throw "Divison by zero is not possible!";
            else
                result = (a / b);
        }
        catch (const char *message)
        {
            cout << message << endl;
        }
        return result;
    }
};
int main()
{
    string choice;
    exp e;
    do
    {
        int n1, n2;
        cout << "Enter the first number : ";
        cin >> n1;
        cout << "Enter the second number : ";
        cin >> n2;
        exp e(n1, n2);
        double result = e.divide();
        if ( n2 != 0)
            cout << n1 << " / " << n2 << " = " << result << endl;
        cout << "\nDo you want to continue(enter yes/no): ";
        cin >> choice;
    } while (choice == "yes");

    return 0;
}