/*Assign and print the roll number, phone number and address of two students having names 
"Sam" and "John" respectively by creating two objects of the class 'Student'.*/
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int roll_no;
	long long int phone_no;
	string add;
	public:
		void assign(int r,long long int p,string a)
		{   
		   cin>>r>>p;
		   cin.ignore();
		   getline(cin,a);
		  roll_no=r;
		  phone_no=p;
		  add=a;
		}
		void display()
		{
			cout<<"roll no.: "<<roll_no<<"\t";
			cout<<"phone no.: "<<phone_no<<"\t";
			cout<<"add.: "<<add<<"\n";
		}
};
int main()
{
	student s,j;
	int a;
	long long int b;
	string c;
	cout<<"enter the student information as roll no, phone no and the add.\n";
	cout<<"for john:\t";
	j.assign(a,b,c);
	cout<<"for sam:\t";
	s.assign(a,b,c);
	cout<<"student information: \n";
	j.display();
	s.display();
}

