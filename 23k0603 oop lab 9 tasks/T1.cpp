#include <iostream>
using namespace std;
class Location{

    public:
    int latitude,longitude;
    Location(int lat,int lon){latitude=lat; longitude=lon;}
    void Display(){cout<<"Latitude = "<<latitude<<"\tLongitude = "<<longitude<<endl;}
    Location(){}
};
class Details:public Location{
protected:
string address;
public:
Details(int lat,int lon):Location(lat,lon),address("city") {}
void Display() {
    Location::Display();
cout << "Address = " << address << endl; 
}
Details operator++(){
 latitude++;
 longitude++;
 address="City";
 return *this;
}
Details operator++(int){
 latitude++;
 longitude++; 
 address="City";
 return *this;
}

Details(){}
};

int main(){
  Details obj1(10,20),obj2(5,30),obj3(90,90);
obj1.Display();
obj2.Display();
obj3.Display();
++obj1;
obj1.Display();
obj2=obj1++;
obj2.Display();
    obj1.latitude +10;
    obj1.longitude +10;
    obj2 = obj1;
    obj3 = obj1 = obj2;
    obj1.Display();
    obj2.Display();
    obj3.Display();
    Location *l;
    l = &obj1;
    l->Display();
    

    return 0;

}