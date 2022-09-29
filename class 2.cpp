#include <iostream>
using namespace std;
class employee
{
private:
char name[100];
int id;
public:
	int salary;
void input()
{
cout<<"enter name: ";
cin>>name;
cout<<"enter id: ";
cin>>id;
cout<<"enter salary: ";
cin>>salary;
}
void display()
{
cout<<"enployee information is: ";
cout<<name<<" "<<id<<" "<<salary;
}
};
int main()
{
float avg;	
employee o1,o2,o3;
o1.input();
o2.input();
o3.input();
o1.display();
o2.display();
o3.display();
avg = (o1.salary+o2.salary+o3.salary)/3;
cout<<"avg salary is : "<<avg;
}
