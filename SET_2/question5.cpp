#include <iostream>
using namespace std;
class section_a
{
protected:
    int totalOFclassA;

public:
    section_a(int n)
    {
        totalOFclassA = n;
    }
    void display()
    {
        cout << "\nNo of Students in section A: " << totalOFclassA;
    }
};
class section_b
{
protected:
    int totalOFclassB;

public:
    section_b(int n)
    {
        totalOFclassB = n;
    }
    void display()
    {
        cout << "\nNo of Students in section B: " << totalOFclassB;
    }
};

class class_10 : public section_a, public section_b
{
protected:
    int total_TEACHERS;

public:
    class_10(int n1, int n2, int n3) : section_a(n1), section_b(n2)
    {
        total_TEACHERS = n3;
    }
    void display()
    {
        cout << "\nnumber of teachers in class 10: " << total_TEACHERS;
    }
};

class SCHOOL : public class_10
{
    int studentsRegistered;

public:
    SCHOOL(int n1, int n2, int n3) : class_10(n1, n2, n3)
    {
        studentsRegistered = totalOFclassA + totalOFclassB;
    }
    void display()
    {
        section_a::display();
        section_b::display();
        class_10::display();
        cout << "\nNo of Students Registered in CBSE EXAMINATION: " << studentsRegistered;
    }
};

int main()
{
   
    int studentsA, studentsB, teachers, UniversityStudents;
    cout << "No of Students in class 10: section A: " ;
    cin >> studentsA;
    cout << "No of Students in class 10: section B: ";
    cin >> studentsB;
    cout << "No of Teachers in class 10: ";
    cin >> teachers;
    SCHOOL JNV(studentsA, studentsB, teachers);
    JNV.display() ;
    return 0;
}
