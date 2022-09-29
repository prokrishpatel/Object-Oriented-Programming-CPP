#include<iostream>
using namespace std;
class A
{
                protected:
                int x;
                public:
                void input()
                {
                    cout<<"x = ";
                    cin>>x;
                }
};
class B:public A
{
                public:
                void display_sq()
                {
                        cout<<"\nsquare of x is :"<<x*x;
                }
};
class C:public A
{
	  int f,i;
                public:
                void display_fa()
                {
                   
   
   F=1;
   if(x<0)
   cout<<"factorial does not.try again";
   else
   {
   	for(i=1;i<=x;i++)
   {
   	f*= i;
   }
   cout<<"factorial is "<<f;
                }
};
class O:public A
{
        public:
                void display()
                {
                        cout<<"\nx:"<<x<<"accessed in Derived Class O";
                }
};
int main()
{
        B obj1;
        C obj2;
        obj1.input();
        obj1.display_sq();
        obj2.input();
        obj2.display_fa();
        return 0;
}



