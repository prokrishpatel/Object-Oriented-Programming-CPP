#include<iostream>
using namespace std;
class s
{
        int x;
        s *next;//next is a pointer of s type, hence s is a self referential class
        public:
        	int sum=0;
                s()
                {
                        next =NULL;
                }
                void getdata()
                {
                        cout<<"Enter x :"<<endl;
                        cin>>x;
                }
                void link(s *t)
                {
                        next=t;
                }
                void print()
                {
                        s *p=this;
                        while(p!=NULL)
                        {
                            sum=sum+x;
                        
                                p=p->next;
                        }
                        cout<<"sum= "<<sum;
                }
                
};
int main()
{
        s o1,o2,o3,o4,o5;
        o1.getdata();
        o2.getdata();
        o3.getdata();
        o4.getdata();
        o5.getdata();
        o1.link(&o2);
        o2.link(&o3);
        o3.link(&o4);
        o4.link(&o5);
        o1.print();
        return 0;
}

