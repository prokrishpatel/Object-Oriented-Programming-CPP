/*Create a class with suitable data members and member functions
for generating unique registration numbers(Take 5 objects and generate
5 unique registration numbers). Use static data members and static
member functions for doing this task*/
#include<iostream>
using namespace std;
class registration_no
{
	static int c;
    public:
    void setregistration()
	{
		++c;
	} 
	static void showregistration()
	{
		cout<<"\nRegistration no. :"<<c;
	}
};
int registration_no :: c=202200;
int main()
{
	registration_no o1,o2,o3,o4,o5;
	o1.setregistration();
	registration_no::showregistration();
    o2.setregistration();
    registration_no::showregistration();
    o3.setregistration();
    registration_no::showregistration();
    o4.setregistration();
    registration_no::showregistration();
    o5.setregistration();
    registration_no::showregistration();
    return 0;
}
