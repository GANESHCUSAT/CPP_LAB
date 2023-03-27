#include <iostream>

class objects
{
private:
    static int count;

public:
    void new_object()
    {
        count++;
    }
    void del_object()
    {
        count--;
    }
    static show_count()
    {
        std::cout << "Number of objects created= " << count;
    }
};
int objects::count = 0;
int main()
{
    int choice;
    std::string option;
    objects object;
    do
    {
        std::cout << "Enter your choice\n";
        std::cout << "1 to  add an object\n";
        std::cout << "2 to  remove an object\n";
        std::cout << "3 to  display number of objects\n";
        std::cout << "4 to  quit\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            object.new_object();
            std::cout << "\nan object created";
            break;
        case 2:
            object.del_object();
            std::cout << "\nan object removed";
            break;
        case 3:
            object.show_count();
            break;
        case 4:
            return 0;
        default:
            std::cout << "invalid entry\n";
        }
        std::cout << "\ndo you want to continue(enter yes/no): ";
        std::cin >> option;
    } while (option == "yes");
    return 0;
}