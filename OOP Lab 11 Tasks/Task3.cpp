#include<iostream>
using namespace std;
class Animal{
protected:
string type,eating,sound;
public:
virtual void Eating()=0;
virtual void Sound()=0;
Animal(string t,string e,string s){
type=t;
eating=e;
sound=s;
}
};
class Dog:public Animal{
    public:
    Dog(string t,string e,string s):Animal(t,e,s){}
    void Eating(){
        cout<<"The dog is eating "<<eating<<endl;
    }
    void Sound(){
        cout<<"The dog says "<<sound<<endl;
    }
};
class Cat:public Animal{
    public:
    Cat(string t,string e,string s):Animal(t,e,s){}
    void Eating(){
        cout<<"The cat is eating "<<eating<<endl;
    }
    void Sound(){
        cout<<"The cat says "<<sound<<endl;
    }
};
class Lion:public Animal{
    public:
    Lion(string t,string e,string s):Animal(t,e,s){}
    void Eating(){
        cout<<"The lion is eating "<<eating<<endl;
    }
    void Sound(){
        cout<<"The lion says "<<sound<<endl;
    }
};
int main(){
Cat C("Garfield","meat","meow");
C.Eating();
C.Sound();
Dog D("Spot","bones","woof");
D.Eating();
D.Sound();
Lion T("King","grass","roar");
T.Eating();
T.Sound();
return 0;
}