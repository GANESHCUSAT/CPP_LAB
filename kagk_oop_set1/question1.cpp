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
    std::cout << "enter your name: ";
    std::cin >> name;
    std::cout << "\nenter your roll number: ";
    std::cin >> roll_no;
    std::cout << "\nenter the marks out of 100";
    std::cout << "\nenter the mark of subject1: ";
    std::cin >> mark1;
    std::cout << "\nenter the mark of subject2: ";
    std::cin >> mark2;
    std::cout << "\nenter the mark of subject3: ";
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
        std::cout << "you have been entered invalid mark";
    }
    else
    {
        std::cout << "\n****RESULT****";
        std::cout << "\nstudent name: " << name;
        std::cout << "\nroll_no: " << roll_no;
        std::cout << "\ngrade=" << calcgrade(mark1, mark2, mark3);
    }
}
int main()
{
    std::string option;
    student s1, s2;
    std::cout << "enter the required detials of the student\n";
    s1.input();
    s1.display();
    do
    {
        std::cout << "\n\ndo you need to continue(enter yes/no): ";
        std::cin >> option;
        if (option == "yes")
        {
            std::cout << "\nenter the required detials of the student\n";
            s2.input();
            s2.display();
        }
    } while (option == "yes");

    return 0;
}