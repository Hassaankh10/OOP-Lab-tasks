#include<iostream>
using namespace std;
int main(){
    int num[9],max;
    int maxarea=0;
cout<<"Enter the height of all points"<<endl;
for (int i = 0; i < 9; i++)
{
    cin>>num[i];
}
for (int i = 0; i < 8; i++)
{
    if(num[i+1]>num[i])
    max=num[i+1]-1;
}
maxarea=max*max;
cout<<"The maximum Area the water can be of is "<<maxarea<<endl;
return 0;
}