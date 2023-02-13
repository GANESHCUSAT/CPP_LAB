#include <iostream>
#include <iomanip>
using namespace std;
class shop
{
private:
    int code, price, qty, count = 0, sum = 0;
    char name[10];
    int item_code[15];
    int item_qty[15];
    int item_price[15];
    string item_name[15];

public:
    void add_item();
    void del_item();
    void display();
};
void shop::add_item()
{
    count++;
    cout << "enter the details of the item to be added\n";
    cout << "enter the item code: ";
    cin >> item_code[count];
    cout << "enter the item name: ";
    cin >> name;
    item_name[count] = name;
    cout << "enter the item price: ";
    cin >> item_price[count];
    cout << "enter the number of item: ";
    cin >> item_qty[count];
}
void shop::del_item()
{
    cout << "enter the details of the item to be removed\n";
    cout << "enter the item code: ";
    cin >> code;
    for (int i = 1; i <= count; i++)
    {
        if (item_code[i] == code)
        {
            item_qty[i] = 0;
            item_name[i] = "nil";
            item_price[i] = 0;
        }
        else
            (item_code[i] != code);
        {
            cout << "item not available";
        }
    }
}
void shop::display()
{
    cout << "              ***************LIST OF ITEMS**************\n"
         << setw(13) << "code"
         << setw(13) << "name"
         << setw(13) << "qty"
         << setw(13) << "price"
         << setw(13) << "amount\n";
    for (int i = 1; i <= count; i++)
    {
        cout << setw(13) << item_code[i];
        cout << setw(13) << item_name[i];
        cout << setw(13) << item_qty[i];
        cout << setw(13) << item_price[i];
        cout << setw(13) << item_qty[i] * item_price[i];
        cout << "\n";
    }
    sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum = sum + item_qty[i] * item_price[i];
    }
    cout << "\ntotal amount= " << sum;
}
int main()
{

    int option;
    string choice;
    shop list;
    do
    {
        cout << "***MAIN MENU***\n";
        cout << "enter 1 for add an item \n"
             << "enter 2 fo delete an item \n"
             << "enter 3 for display the list \n";
        cin >> option;
        switch (option)
        {
        case 1:
            list.add_item();
            break;
        case 2:
            list.del_item();
            break;
        case 3:
            list.display();
            break;
        }
        cout << "\ndo you want to continue(enter yes or no): ";
        cin >> choice;
    } while (choice == "yes");
    return 0;
}