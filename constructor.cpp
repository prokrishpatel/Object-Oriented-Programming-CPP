#include<iostream>
using namespace std;
class example
{
	int x,y;
	public:
		
		void display()
		{
			cout<<x<<" "<<y<<"\n";
		}
		example()
		{
			cout<<"enter any two value : \n";
			cin>>x>>y;
		}
};
int main()
{
	example obj[5];
 for(int i=0;i<5;i++)
{
	obj[i].display();
}

}
