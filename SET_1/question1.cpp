#include <iostream>
class student
{
private:
    std::string name, grade;
    int roll_no;
    int mark1, mark2, mark3;

public:
    void input();
    char calcgrade(int, int, int);
    void display();
};

void student::input()
{
    std::cout << "\nEnter the name of the student: ";
    std::cin >> name;
    std::cout << "\nEnter your roll number: ";
    std::cin >> roll_no;
    std::cout << "\nEnter the marks out of 100";
    std::cout << "\nEnter the mark of subject1: ";
    std::cin >> mark1;
    std::cout << "\nEnter the mark of subject2: ";
    std::cin >> mark2;
    std::cout << "\nEnter the mark of subject3: ";
    std::cin >> mark3;
}

char student::calcgrade(int m1, int m2, int m3)
{
    int tm, tg;
    char grade;
    tm = m1 + m2 + m3;
    tg = (tm / 3);
    if (tg >= 90)
    {
        grade = 'A';
    }
    else if (tg >= 80 and tg < 90)
    {
        grade = 'B';
    }
    else if (tg >= 70 and tg < 60)
    {
        grade = 'C';
    }
    else if (tg >= 60 and tg < 70)
    {
        grade = 'D';
    }
    else if (tg >= 50 and tg < 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

void student::display()
{
    if (mark1 > 100 or mark2 > 100 or mark3 > 100)
    {
        std::cout << "You have been entered an  invalid mark";
    }
    else
    {
        std::cout << "\n****RESULT****";
        std::cout << "\nSTUDENT NAME: " << name;
        std::cout << "\nROLL NUMBER: " << roll_no;
        std::cout << "\nGRADE: " << calcgrade(mark1, mark2, mark3);
    }
}
int main()
{
    std::string option;
    student s;
    do
    {
        std::cout << "\nEnter the required detials of the student\n";
        s.input();
        s.display();
        std::cout << "\n\ndo you want to continue(enter yes/no): ";
        std::cin >> option;
    } while (option == "yes");

    return 0;
}