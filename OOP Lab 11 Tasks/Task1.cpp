#include<iostream>
using namespace std;
class Shape
{
protected:
    double length,width;
public:
    Shape(double l,double w){
        length=l;
        width=w;
    }
    void get_data(){
        cout<<"Enter the length and width of the shape: ";
        cin>>length>>width;
    }
    void virtual display_area(){

        cout<<"The area of the shape is: "<<length*width<<endl;
    }

};
class Triangle:public Shape{
   
    public:
    Triangle(double l,double w):Shape(l,w){}
    void display_area(){
        cout<<"The area of the triangle is: "<<0.5*length*width<<endl;
    }

};
class Rectangle:public Shape{

    public:
    Rectangle(double l,double w):Shape(l,w){}
    void display_area(){
        cout<<"The area of the rectangle is: "<<length*width<<endl;
    }
    
};
int main(){
    Shape s(12,2);
    s.display_area();
    Triangle T(12,2);
    T.display_area();
    Rectangle R(12,2);
    R.display_area();
return 0;
}