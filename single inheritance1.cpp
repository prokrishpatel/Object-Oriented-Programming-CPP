#include<iostream>
using namespace std;
class A
{
        protected:
                int x;
        
};
class B:public A
{
        protected:
                int y,z;
                public:
                        void getdata()
                        {
                                cout<<"\n Enter the values of x,y and z:";
                                cin>>x>>y>>z;
                        }
                       
                        void largest()
                        {       if (x>y&&x>z){
						
                                cout<<"\n largest:"<<x;
                            }
                            else if (y>x&&y>z){
						
                                cout<<"\n largest:"<<y;
                            }
                            else
                        {
                        	cout<<"\n largest:"<<z;
						}
                        }
};
int main()
{
        B obj1;
        obj1.getdata();
       
        obj1.largest();
}

