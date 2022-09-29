//Single friend function for a class
#include<iostream>
using namespace std;
class sample
{
        int a,b,c;
        public:
        	friend int largest(sample);
        void input()
                {
                    cout<<"\nEnter values of a,b and c:";
                    cin>>a>>b>>c;
                }
    
};
int largest(sample obj)
{
        if(obj.a>obj.b && obj.a>obj.c)
        return obj.a;
        else if(obj.b>obj.a && obj.b>obj.c)
        return obj.b;
        else
        return obj.c;
}
int main()
{
        sample s;
        s.input();
        cout<<largest(s);
        return 0;
}



