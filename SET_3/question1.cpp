#include <iostream>
using namespace std;

class Shape
{
protected:
    double d1, d2;

public:
    void get_data(double a, double b)
    {
        d1 = a;
        d2 = b;
    }
    virtual void display_area() = 0;
};
class Triangle : public Shape
{
    double areaOfTriangle;

public:
    void display_area()
    {
        areaOfTriangle = 0.5 * d1 * d2;
        cout << "\nArea of the Triangle : " << areaOfTriangle;
    }
};
class Rectangle : public Shape
{
    double areaOfRectangle;

public:
    void display_area()
    {
        areaOfRectangle = d1 * d2;
        cout << "\nArea of the Rectangle : " << areaOfRectangle;
    }
};

int main()
{
    int option;
    string choice;
    do
    {
        Shape *shapeptr;
        double base, height, length, breadth;
        cout << "enter 1 to find area of Triangle\nenter 2 to area of Rectangle.\nenter: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nEnter the base: ";
            cin >> base;
            cout << "enter the height: ";
            cin >> height;
            shapeptr = new Triangle;
            shapeptr->get_data(base, height);
            shapeptr->display_area();
            break;
        case 2:
            cout << "\nEnter the length: ";
            cin >> length; 
            cout<<"enter the breadth: "; 
            cin >> breadth;
            shapeptr = new Rectangle;
            shapeptr->get_data(length, breadth);
            shapeptr->display_area();
            break;
        default:
            return 0;
        }
        cout << "\nDo you want to continue(enter yes/no): ";
        cin >> choice;
    } while (choice == "yes");

    return 0;
}