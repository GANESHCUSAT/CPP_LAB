#include <iostream>
using namespace std;
class student
{
protected:
    char name[15];
    int roll_no;

public:
    void get_detials()
    {
        cout << "\nEnter the name of the student: ";
        cin >> name;
        cout << "\nEnter the roll number : ";
        cin >> roll_no;
    }
    void display_details()
    {
        cout << "\nNAME OF THE STUDENT: " << name;
        cout << "\nROLL NUMBER OF THE STUDENT: " << roll_no;
    }
};
class test : public virtual student
{
protected:
    int mark1, mark2, mark3;

public:
    void get_marks()
    {
        cout << "Enter the marks out of 100";
        cout << "\nEnter the mark of subject 1: ";
        cin >> mark1;
        cout << "\nEnter the mark of subject 2: ";
        cin >> mark2;
        cout << "\nEnter the mark of subject 3: ";
        cin >> mark3;
    }
    void display_marks()
    {
        cout << "\nMARK IN SUBJECT 1 : " << mark1;
        cout << "\nMARK IN SUBJECT 2 : " << mark2;
        cout << "\nMARK IN SUBJECT 3 : " << mark3;
    }
};
class sports : public virtual student
{
protected:
    int sportscore;

public:
    void get_score()
    {
        cout << "\nEnter the score in sports: ";
        cin >> sportscore;
    }
    void display_score()
    {
        cout << "\nSCORE SECURED IN SPORTS: " << sportscore;
    }
};
class result : public test, public sports
{
protected:
    int total_score;

public:
    void total()
    {
        total_score = mark1 + mark2 + mark3 + sportscore;
    }
    void display_result()
    {
        display_details();
        display_marks();
        display_score();
        total();
        cout << "\nTOTAL : " << total_score;
    }
};
int main()
{
    string choice;
    do
    {
        cout << "****ENTER THE DETAILS OF THE STUDENT****";
        result r1;
        r1.get_detials();
        r1.get_marks();
        r1.get_score();
        cout << "\n****RESULT****";
        r1.display_result();
        cout << "\ndo you want to continue(enter yes or no): ";
        cin >> choice;
    } while (choice == "yes");
    return 0;
}