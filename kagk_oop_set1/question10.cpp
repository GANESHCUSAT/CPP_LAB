#include <iostream>
#include <iomanip>

class shop
{
private:
    int code, price, qty, count = 0, sum = 0;
    char name[10];
    int item_code[15];
    int item_qty[15];
    int item_price[15];
    std::string item_name[15];

public:
    void add_item();
    void del_item();
    void display();
};
void shop::add_item()
{
    count++;
    std::cout << "enter the details of the item to be added\n";
    std::cout << "enter the item code: ";
    std::cin >> item_code[count];
    std::cout << "enter the item name: ";
    std::cin >> name;
    item_name[count] = name;
    std::cout << "enter the item price: ";
    std::cin >> item_price[count];
    std::cout << "enter the number of item: ";
    std::cin >> item_qty[count];
}
void shop::del_item()
{
    int j = 0;
    std::cout << "enter the details of the item to be removed\n";
    std::cout << "enter the item code: ";
    std::cin >> code;
    for (int i = 1; i <= count; i++)
    {
        if (item_code[i] == code)
        {
            item_qty[i] = 0;
            item_name[i] = "nil";
            item_price[i] = 0;
            j = 1;
        }
    }
    if (j != 1)
    {
        std::cout << "item not available";
    }
}
void shop::display()
{
    std::cout << "\n              ***************LIST OF ITEMS**************\n"
              << std::setw(13) << "code"
              << std::setw(13) << "name"
              << std::setw(13) << "qty"
              << std::setw(13) << "price"
              << std::setw(13) << "amount\n";
    for (int i = 1; i <= count; i++)
    {
        std::cout << std::setw(13) << item_code[i];
        std::cout << std::setw(13) << item_name[i];
        std::cout << std::setw(13) << item_qty[i];
        std::cout << std::setw(13) << item_price[i];
        std::cout << std::setw(13) << item_qty[i] * item_price[i];
        std::cout << "\n";
    }
    sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum = sum + item_qty[i] * item_price[i];
    }
    std::cout << "\ntotal amount= " << sum;
}
int main()
{

    int option;
    std::string choice;
    shop list;
    do
    {
        std::cout << "***MAIN MENU***\n";
        std::cout << "enter 1 for add an item \n"
                  << "enter 2 fo delete an item \n"
                  << "enter 3 for display the list \n";
        std::cin >> option;
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
        std::cout << "\ndo you want to continue(enter yes or no): ";
        std::cin >> choice;
    } while (choice == "yes");
    return 0;
}