//Enumeration
#include <iostream>
using namespace std;
enum colors{RED,GREEN,YELLOW,ORANGE};
int main()
{
    colors c;//colors is a user defined data type and c is the variable
    c=RED;//c can accept value of colors type only
    cout<<c;
    c=(colors)45;//With type casting integer 45 is now converted to colors type
    cout<<endl<<c;
    return 0;
}
