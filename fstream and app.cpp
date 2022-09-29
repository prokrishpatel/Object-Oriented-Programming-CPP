#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
 fstream FILE2;
 int a;
 FILE2.open("appendfile.txt",ios::app);
 if(!FILE2)
 {
 cout<<"\n File could not be opened";
 exit(1);
 }
 FILE2<<a;
 FILE2.close();
 cout<<a;
 return 0;
}

