#include <iostream>
#include <cmath>
using namespace std;
class vector
{
private:
    int i, j, k, magnitude;

public:
    void get_vector(void);
    void find_magnitude(void);
    bool operator==(vector &);
    bool operator!=(vector &);
    bool operator<(vector &);
    bool operator<=(vector &);
    bool operator>(vector &);
    bool operator>=(vector &);
};
void vector::get_vector()
{
    cout << "\nenter the i component: ";
    cin >> i;
    cout << "\nenter the j component: ";
    cin >> j;
    cout << "\nenter the k component: ";
    cin >> k;
}
void vector::find_magnitude()
{
    magnitude = sqrt((i * i) + (j * j) + (k * k));
}
bool vector::operator==(vector &a)
{
    if (magnitude == a.magnitude)
        return true;
    else
        return false;
}
bool vector::operator!=(vector &a)
{
    if ((magnitude != a.magnitude))
        return true;
    else
        return false;
}
bool vector::operator<(vector &a)
{
    if ((magnitude < a.magnitude))
        return true;
    else
        return false;
}
bool vector::operator<=(vector &a)
{
    if (magnitude <= a.magnitude)
        return true;
    else
        return false;
}
bool vector::operator>(vector &a)
{
    if (magnitude > a.magnitude)
        return true;
    else
        return false;
}
bool vector::operator>=(vector &a)
{
    if (magnitude >= a.magnitude)
        return true;
    else
        return false;
}
int main()
{
    vector v1, v2;
    cout << "\nenter the required details of vector1: \n";
    v1.get_vector();
    v1.find_magnitude();
    cout << "\nenter the required details of vector2: \n";
    v2.get_vector();
    v2.find_magnitude();
    int choice;
    string option;
    do
    {
        cout << "\n****MAIN MENU****\n\n";
        cout << "\nEnter 1 for checking if both the vectors are equal.\n";
        cout << "\nEnter 2 for checking if both the vectors are not equal.\n";
        cout << "\nEnter 3 for checking if the second vector is greater than the first vector.\n";
        cout << "\nEnter 4 for checking if the second vector is greater than or equal to the first vector.\n";
        cout << "\nEnter 5 for checking if the first vector is greater than the second vector.\n";
        cout << "\nEnter 6 for checking if the first vector is greater than or equal to the second vector.\n";
        cout << "\nEnter your choice : \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (v1 == v2)
                cout << "Both the vectors are equal. ";
            else
                cout << "Both the vectors are not equal. ";
            break;
        case 2:
            if (v1 != v2)
                cout << "Both the vectors are not equal. ";
            else
                cout << "Both the vectors are equal. ";
            break;
        case 3:
            if (v1 < v2)
                cout << "The second vector is greater than the first vector. ";
            else
                cout << "The second vector is not greater than the first vector ";
            break;
        case 4:
            if (v1 <= v2)
                cout << "The second vector is greater than or equal to the first vector. ";
            else
                cout << "The second vector is not greater than or equal to the first vector ";
            break;
        case 5:
            if (v1 > v2)
                cout << "The first vector is greater than the second vector. ";
            else
                cout << "The first vector is not greater than the second vector ";
            break;
        case 6:
            if (v1 >= v2)
                cout << "The first vector is greater than or equal to the second vector. ";
            else
                cout << "The first vector is not greater than or equal to the second vector ";
            break;
        default:
            cout << "invalid input";
        }
        cout << " \ndo you want to continue(enter yes or no): ";
        cin >> option;
        if(option=="no")
        {
            std::cout<<"***exited succesfully***";
        }
    } while (option == "yes");
    return 0;
}