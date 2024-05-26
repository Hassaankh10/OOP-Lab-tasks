#include <iostream>
#include <string>
using namespace std;
class User;
class Message
{
private:
    string message;

public:
    Message(string);
    ~Message();
    friend void sendMessage(User &a, Message &b);
};
class User
{
private:
    int id;
    string name;

public:
    User(int i, string n);
    ~User();
    friend void sendMessage(User &a, Message &b);
};
Message::Message(string a)
{
    message = a;
}
Message::~Message()
{
}
User::User(int i, string n)
{
    id = i;
    name = n;
}
User::~User()
{
}
void sendMessage(User &a, Message &b)
{
    cout << "Message sent: " << b.message << endl;
    cout << "To user id " << a.id << " name " << a.name << endl;
}
int main()
{
    Message m("hello");
    User u1(100, "hassaan");
    User u2(200, "Ebrahim");
    sendMessage(u1, m);
    return 0;
}
