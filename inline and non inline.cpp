//Inline and non-inline member functions
#include <iostream>
using namespace std;
class example 
{
    int a,b;
    public:
    void input()//Member functions which are defined inside the class are by default inline in nature
    {
        cout<<"\nEnter a and b:";
        cin>>a>>b;
    }
    void output();//By default ouput() is non-inline, but we can make it inline by using inline keyword when it will be defined outside
};
inline void example::output()//scope resolusion operater
{
    cout<<"\nValues of a and b are:"<<a<<" "<<b;
}
int main() {
   example obj;
   obj.input();
   obj.output();
   return 0;
}


