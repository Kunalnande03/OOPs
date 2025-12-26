#include<stdio.h>
using namespace std;
class ractangle
{
  int length,width;
public:
     void set(int l,int w)
     {
       length=l;
       width=w;
     }
     void ger()
     {
       cout<<"\nLength is "<<length;
       cout<<"\nwidth is "<<width;
     }
     void area()
     {
       int ar=length*width;
       cout<<"\n Area of Ractangle is %d",ar";
     }
};
int main()
{
  ractangel r1;
  int a,b;
  cout<<"\n Enter Lenght ";
  cin>>a;
  cout<<"\n Enter width ";
  cin>>b;
  
  r1.set(a,b);
  r1.get();
  r1.area();
}