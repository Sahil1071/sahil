//Create a class with name: student, take the value of roll no and name
//from the user and print those values using member function

#include<iostream>
using namespace std;
class student
{ public:
	int rollno;
	char name[30];
	void getdata();
	void showdata();
	};
 void student::getdata()
 {
 	cout<<"enter the values of rollno and name=";
 	cin>>rollno>>name;
	 }	
 void student::showdata()
 {
 	cout<<"\n rollno is="<<rollno;
 	cout<<"\n name is="<<name;
 };
 main()
 {
 class student obj;
 obj.getdata();
 obj.showdata();
}
