#include <iostream>
using namespace std;
class String
{
private:
    char *arr = new char[10];

public:
    String() {}
    String(char *s)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = s[i];
        }
    }
    void display()
    {
        while (*arr != '\0')
        {
            cout << *arr;
            arr++;
        }
    }
    void operator=(String s)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = s.arr[i];
        }
    }
};
int main()
{
    String s("hello");
    String s1;
    s1 = s;
    s1.display();

    return 0;
}