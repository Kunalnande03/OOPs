#include<stdio.h>
using namespace std;
class ractangle
{
  int length,breadth;
public:
     ractangle()
     {
 	cout<<"\n Enter Lenght ";
  	cin>>a;
  	cout<<"\n Enter width ";
  	cin>>breadth;
       
     }
     void ger()
     {
       cout<<"\nLength is "<<length;
       cout<<"\nbreadth is "<<breadth;
     }
     void area()
     {
       int ar=length*breadth;
       cout<<"\n Area of Ractangle is %d",ar";
     }
};
int main()
{
  ractangel r1;
  
  r1.get();
  r1.area();
}