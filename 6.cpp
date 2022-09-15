//copy the content of one file to another file
#include<iostream>
#include<fstream>

using namespace std ;
main ()
{
fstream f1("f1.txt",ios::in);
fstream f2("f2.txt",ios::out);

string ch;
getline(f1,ch);
f1<<ch;

f1.close();
f2.close();
}	

