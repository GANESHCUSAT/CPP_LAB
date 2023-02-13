#include <iostream>
using namespace std;
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
        cout << "number of objects created= " << count;
    }
};
int objects::count = 0;
int main()
{
    int choice;
    string option;
    objects object;
    do
    {
        cout << "enter your choice\n";
        cout << "1 to  add an object\n";
        cout << "2 to  remove an object\n";
        cout << "3 to  display no. of objects\n";
        cout << "4 to  quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            object.new_object();
            cout << "\nan object created";
            break;
        case 2:
            object.del_object();
            cout << "\nan object removed";
            break;
        case 3:
            object.show_count();
            break;
        case 4:
            return 0;
        default:
            cout << "invalid entry\n";
        }
        cout << "\ndo you want to continue(enter yes/no): ";
        cin >> option;
    } while (option == "yes");
    return 0;
}