/*Create a class with suitable data members and member functions for generating 
the final bill after doing shopping in a shopping mall.[Consider 5 objects which 
may have done purchasing]. Use static data members and static member functions for doing this task*/
#include<iostream>
using namespace std;
class bill
{
float price;
    static float amount;
	public:
		void input()
		{
			for(int i=1;i<6;i++)
			{   
				cout<<"please enter price of "<<i<<" product: ";
				cin>>price;
			   amount=amount+price;
			}
		}
		static void output()
		{
			cout<<"Total Amount to pay is: "<<amount;
		}
};
float bill::amount;

int main()
{
	bill x;
	x.input();
	bill::output();	
}
