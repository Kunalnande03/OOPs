#include<stdio.h>
using namespace std;
class doctor
{
   int id;
   char name[12];
public:
    void input()
    {
      cout<<"\n Enter id ";
      cin>>id;
      cout<<"\n Enter name ";
      cin>>name;
    }
    void output()
    {
      cout<<"\n Id "<<id;
      cout<"\n Name "<<name;
    }
};
int main()
{
  doctor d1,d2;
  d1.input();
  d1.output();
   
  d2.input();
  d2.output();
}
