//Single friend function for a class(Passing object as an argument(Call by reference))
#include<iostream>
using namespace std;
class sample
{
        int a;
        int b;
        public:
        friend void modify(sample &);
                void setvalue()
                {
                        a=45;
                        b=40;
                }
                void display()
                {
                    cout<<endl<<a<<" "<<b;
                }
};
void modify(sample &s)
{
        s.a=100;
        s.b=200;
}
int main()
{
        sample X;
        X.setvalue();
        X.display();
        modify(X);//x=&s
        X.display();
        return 0;
}



