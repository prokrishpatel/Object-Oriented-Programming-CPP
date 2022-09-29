//Common friend of more than one classes
#include<iostream>
using namespace std;
class ABC;//Forward declaration--It is done when class is used before its definition
class XYZ
{
        int data1;
        public:
                void setvalue(int value)
                {
                        data1=value;
                }
                friend void add(XYZ,ABC);
};
class ABC
{
        int data2;
        public:
                void setvalue(int value)
                {
                        data2=value;
                }
        friend void add(XYZ,ABC);
};
void add(XYZ obj1,ABC obj2)
{
        cout<<"Sum is="<<obj1.data1+obj2.data2;
}
int main()
{
        XYZ X;
        ABC A;
        X.setvalue(5);
        A.setvalue(50);
        add(X,A);
        return 0;
}





