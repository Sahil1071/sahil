//Array of an object
#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata(int x, char y[])  //x=5, y="ram"
{
rollno=x;
strcpy(name,y);
}
void putdata()
{
cout<<"rollno is="<<rollno <<endl;
cout<<"name is="<<name<<endl;
}
};
int main()
{
class student obj[5];
class student *p[5];
int i;
for (i=1;i<=5;i++)

{
p[i]=&obj[i];
}
int r;  //r=rollno
char n[30];  //n=name


{

cout<<"Enter Roll no and Name";
cin>>r>>n;
p[i]->getdata(r,n);

}
cout<<"\n \n";
for (i=1;i<=5;i++)
{

p[i]->putdata();
}}

