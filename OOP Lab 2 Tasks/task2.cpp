#include <iostream>
using namespace std;
struct books
{
    string title, author, year, genre;
};
void Searchbook()
{
}
void Updatebook()
{
}
void Createbook()
{
    int num;
    cout << "Enter How many Books you Want to create" << endl;
    cin >> num;
}
int main()
{
    cout << "Welcome to the library Management System" << endl;
    int code, counter = 0;

    books book[counter];
SIN:
    cout << "choose one of the following options" << endl;
    cout << "1.Create books" << endl;
    cout << "2.Update books" << endl;
    cout << "3.Search books" << endl;
    cin >> code;
    switch (code)
    {
    case 1:
        do
        {
            cout << "Enter Title of book" << endl;
            cin >> book[counter].title;
            cout << "Enter Author of book" << endl;
            cin >> book[counter].author;
            cout << "Enter Year of Publishion of book" << endl;
            cin >> book[counter].year;
            cout << "Enter Genre of book" << endl;
            cin >> book[counter].genre;
            counter++;
        } while (code == 1);
        break;
    case 2:
        Updatebook();
        break;
    case 3:
        Searchbook();
        break;
    case 4:
        cout << "Thanks for using our Program" << endl;
        break;
    default:
        cout << "wrong input" << endl;
        goto SIN;
        break;
    }
    return 0;
}