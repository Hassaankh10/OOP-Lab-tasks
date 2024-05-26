#include <iostream>
using namespace std;
struct Student
{
    int maths, english, science, total, avg;
    char grade;
};
int main()
{
    int std;
    cout << "enter the number of students" << endl;
    cin >> std;
    struct Student s[std];
    for (int i = 0; i < std; i++)
    {
        cout << "Enter the Marks of student " << i + 1 << " in English" << endl;
        cin >> s[i].english;
        cout << "Enter the Marks of student " << i + 1 << " in Maths" << endl;
        cin >> s[i].maths;
        cout << "Enter the Marks of student " << i + 1 << " in Science" << endl;
        cin >> s[i].science;
        s[i].total = s[i].science + s[i].english + s[i].english;
        s[i].avg = s[i].total / 3;
    }
    for (int i = 0; i < std; i++)
    {
        cout << "The total Marks of student " << i + 1 << " is " << s[i].total << endl;
        cout << "the avg of student is " << s[i].avg << endl;
        if (s[i].avg>89)
        {
        s[i].grade='A';
        }
        else if (s[i].avg>79)
        {
            s[i].grade='B';
        }
         else if (s[i].avg>69)
        {
            s[i].grade='C';
        }
         else if (s[i].avg>59)
        {
            s[i].grade='D';
        }
        else{
        s[i].grade='F';
        }
        cout<<"The grade of student "<<i+1<<" is "<<s[i].grade<<endl;
    }
    return 0;
}