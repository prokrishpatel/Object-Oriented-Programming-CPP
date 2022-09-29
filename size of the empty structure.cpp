//Structure(Size of empty structure/ or empty class will be 1 byte[Reason:Unique address identification])
#include <iostream>
using namespace std;
struct rectangle 
{
   //Empty structure
};
int main()
{
    rectangle obj;
    cout<<sizeof(obj);//1 byte
    return 0;
}
