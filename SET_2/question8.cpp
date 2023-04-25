#include <iostream>
using namespace std;
class Shape
{
protected:
    float area;

public:
    virtual void get_data() = 0;
    virtual void get_area() = 0;
};

class Circle : public Shape
{
    float radius;

public:
    void get_data()
    {
        cout << "Enter the Radius of the Circle" << endl;
        cin >> radius;
    }
    void get_area()
    {
        area = (22.0 / 7.0) * radius * radius;
        cout << "Area of the Circle is " << area << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    void get_data()
    {
        cout << "Enter the Side of the Square" << endl;
        cin >> side;
    }
    void get_area()
    {
        area = side * side;
        cout << "Area of the Square is " << area << endl;
    }
};

class Ellipse : public Shape
{
    float minorAxis, majorAxis;

public:
    void get_data()
    {
        cout << "Enter the Minor Axis of the Ellipse" << endl;
        cin >> minorAxis;
        cout << "Enter the Major Axis of the Ellipse" << endl;
        cin >> majorAxis;
    }
    void get_area()
    {
        area = (22.0 / 7.0) * majorAxis * minorAxis;
        cout << "The Area of the Ellipse is " << area << endl;
    }
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    void get_data()
    {
        cout << "Enter the Length of the Rectangle" << endl;
        cin >> length;
        cout << "Enter the Breadth of the Rectangle" << endl;
        cin >> breadth;
    }
    void get_area()
    {
        area = length * breadth;
        cout << "The Area of the Rectangle is " << area << endl;
    }
};
int main()
{
    Shape *shapeptr;
    int option;
    string choice;
    do
    {
        cout << "enter 1 to find area of circle\n";
        cout << "enter 2 to find area of square\n";
        cout << "enter 3 to find area of elipse\n";
        cout << "enter 4 to find area of rectangle\n";
        cin >> option;
        switch (option)
        {
        case 1:
            shapeptr = new Circle;
            shapeptr->get_data();
            shapeptr->get_area();
            break;
        case 2:
            shapeptr = new Square;
            shapeptr->get_data();
            shapeptr->get_area();
            break;
        case 3:
            shapeptr = new Ellipse;
            shapeptr->get_data();
            shapeptr->get_area();
            break;
        case 4:
            shapeptr = new Rectangle;
            shapeptr->get_data();
            shapeptr->get_area();
            break;
        default:
            break;
        }
        cout << "\ndo you want to continue(enter yes or no): ";
        cin >> choice;
        if (choice== "no")
        {
            cout << "***exited succesfully***";
        }
    } while (choice == "yes");
   
    return 0;
}
