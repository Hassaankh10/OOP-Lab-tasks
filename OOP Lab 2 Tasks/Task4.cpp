#include<iostream>
using namespace std;
  struct Register
        {
            int CourseID;
            string Coursename;
        };
struct Student
{
        int studentID;
        string fname,lname,cellno,Email;
        struct Register s[5];
        
};
int main(){
    struct Student s[5];
    cout<<"Enter the details of students\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the studentID for student\t["<<i+1<<"]\n";
        cin>>s[i].studentID;
     cout<<"Enter the First Name for student\t["<<i+1<<"]\n";
        cin>>s[i].fname;
        cout<<"Enter the Last Name for student\t["<<i+1<<"]\n";
        cin>>s[i].lname;   
        cout<<"Enter the cell for student\t["<<i+1<<"]\n";
        cin>>s[i].cellno;
        cout<<"Enter the Email for student\t["<<i+1<<"]\n";
        cin>>s[i].Email;
        cout<<"Enter the CourseID for student\t["<<i+1<<"]\n";
        cin>>s[i].s[i].CourseID;
        cout<<"Enter the CourseName for student\t["<<i+1<<"]\n";
        cin>>s[i].s[i].Coursename;
    }
    cout<<"here are the details of students\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"The First Name of Student ["<<i+1<<"] is "<<s[i].fname<<endl;
        cout<<"The Last Name of Student ["<<i+1<<"] is "<<s[i].lname<<endl;
        cout<<"The StudentID of Student ["<<i+1<<"] is "<<s[i].studentID<<endl;
       cout<<"The cellNo of Student ["<<i+1<<"] is "<<s[i].cellno<<endl;
       cout<<"The Email of Student ["<<i+1<<"] is "<<s[i].Email<<endl;
       cout<<"The CourseID of Student ["<<i+1<<"] is "<<s[i].s[i].CourseID<<endl;
       cout<<"The CourseName of Student ["<<i+1<<"] is "<<s[i].s[i].Coursename<<endl;
    }
    
    

return 0;
}