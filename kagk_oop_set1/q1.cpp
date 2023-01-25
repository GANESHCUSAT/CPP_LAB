#include <iostream>
using namespace std;
class student
{
private:
    std::string name, grade;
    int roll_no;
    int mark1, mark2, mark3, mrks;

public:
    void input();
    char calcgrade(int, int, int);
    void display();
};

void student::input()
{
    cout << "enter your name: ";
    cin >> name;
    cout << "\nenter your roll number: ";
    cin >> roll_no;
    cout << "\nenter the marks out of 100";
    cout << "\nenter the mark of subject1: ";
    cin >> mark1;
    cout << "\nenter the mark of subject2: ";
    cin >> mark2;
    cout << "\nenter the mark of subject3: ";
    cin >> mark3;
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
        cout << "you have been entered invalid mark";
    }
    else
    {
        cout << "\n****RESULT****";
        cout << "\nstudent name: " << name;
        cout << "\nroll_no: " << roll_no;
        cout << "\ngrade=" << calcgrade(mark1, mark2, mark3);
    }
}
int main()
{
    string option;
    student s1, s2;
    cot << "enter the number of students: " cout << "enter the required detials of the student\n";
    s1.input();
    s1.display();
    do
    {
        cout << "\n\ndo you need to continue(enter yes/no): ";
        cin >> option;
        if (option == "yes")
        {
            cout << "\nenter the required detials of the student\n";
            s2.input();
            s2.display();
        }
    } while (option == "yes");

    return 0;
}