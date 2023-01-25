#include <iostream>
#include <cmath>

void area(int l, int b)
{
    int area;
    area = l * b;
    std::cout << "The Area of the Rectangle is " << area;
}

void area(int side)
{
    int area;
    area = side * side;
    std::cout << "The Area of the Square is " << area;
}

void area(float r)
{
    float area;
    area = 3.14 * r * r;
    std::cout << "The Area of the Circle is " << area;
}

void area(float height, float b1, float b2)
{
    float area;
    area = 0.5 * (height * (b1 + b2));
    std::cout << "The Area of the Trapezium is " << area;
}

void area(int side1, int side2, int side3)
{
    float area;
    float s = (side1 + side2 + side3) / 2;
    area = std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    std::cout << "The Area of the Triangle is " << area;
}

int main()
{
    int option;
    std::cout << "select the shape which you want:\n";
    std::cout << "1.enter 1 for rectangle\n2.enter 2 for circle\n3.enter 3 for trapezium \n4.enter 4 for triangle\n5.enter 5 for square\n";
    std::cin >> option;
    switch (option)
    {
    case 1:
        int length, breadth;
        std::cout << "Enter the Length & Breadth of Rectangle\n";
        std::cin >> length >> breadth;
        area(length, breadth);
        break;
    case 2:
        float radius;
        std::cout << "Enter the Radius of the Circle\n";
        std::cin >> radius;
        area(radius);
        break;
    case 3:
        float height, base1, base2;
        std::cout << "Enter the Height and Bases of Trapezium\n";
        std::cin >> height >> base1 >> base2;
        area(height, base1, base2);
        break;
    case 4:
        int side1, side2, side3;
        std::cout << "Enter the Sides of Triangle\n";
        std::cin >> side1 >> side2 >> side3;
        area(side1, side2, side3);
        break;
    case 5:
        int side;
        std::cout << "Enter the Side of the Square\n";
        std::cin >> side;
        area(side);
        break;
    }
    return 0;
}
