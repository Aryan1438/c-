#include <iostream>
using namespace std;
int grade(int m)
{
    if (m >= 80)
        return 10;
    else if (m >= 73 && m < 80)
        return 9;
    else if (m < 73 && m >= 66)
        return 8;
    else if (m >= 60 && m < 66)
        return 7;
    else if (m >= 55 && m < 60)
        return 6;
    else if (m >= 50 && m < 55)
        return 5;
    else if (m >= 45 && m < 50)
        return 4;
    else
        return 0;
}
string grade_l(int grade_point)
{
    switch (grade_point)
    {
    case 10:
        return "AA";
        break;
    case 9:
        return "AB";
        break;
    case 8:
        return "BB";
        break;
    case 7:
        return "BC";
        break;
    case 6:
        return "CC";
        break;
    case 5:
        return "CD";
        break;
    case 4:
        return "DD";
        break;
    default:
        return "FF";
    }
    int main()
    {
        
        string grade_letter[6], id, name;
        int sem, gp[6], marks[6];
        float sgpa = 0;

        cout << "Enter your ID: ";
        cin >> id;
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter the Semester : ";
        cin >> sem;
        cout << "Enter the marks in Semester Examination : \n";
        cout << endl
             << "Enter marks of Computer Programming Theory and Practical in order : ";
        cin >> marks[0] >> marks[1];
        cout << endl
             << "Enter marks of Basics of Electronics Theory and Practical in order : ";
        cin >> marks[2] >> marks[3];
        cout << endl
             << "Enter marks of Professional Communication Theory and Practical in order : ";
        cin >> marks[4] >> marks[5];

        for (int i = 0; i < 6; i++)
        {
            gp[i] = grade(marks[i]);
        }
        sgpa = (5 * (gp[0] + gp[1]) + 4 * (gp[2] + gp[3]) + 2 * (gp[4] + gp[5])) / 22.0;

        // Printing the Marksheet

        cout << "\n\nID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Semester : " << sem << endl;
        cout << "\t\t\tTheory\tPractical" << endl;
        cout << "Computer programming\t    " << grade_l(gp[0]) << "\t   " << grade_l(gp[1]) << endl;
        cout << "Basics of Electronic\t    " << grade_l(gp[2]) << "\t   " << grade_l(gp[3]) << endl;
        cout << "Professional Communication  " << grade_l(gp[4]) << "\t   " << grade_l(gp[5]) << endl;
        cout << endl
             << "sgpa = "
             << sgpa << endl
             << endl
             << "23CS057_Aryan_Patel";

        return 0;
    }
}
