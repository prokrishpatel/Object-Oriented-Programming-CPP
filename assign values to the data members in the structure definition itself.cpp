//Structure(We can assign values to the data members in the structure definition itself[These values will act as default values])
#include <iostream>
using namespace std;
struct rectangle 
{
    private:
    int length=1,breadth=2;
    public:
    int area;
    void input()
    {
        cout<<"\nEnter length and breadth";
        cin>>length>>breadth;
    }
    int calculate()
    {
        area=length*breadth;
        return area;
    }
};
int main()
{
    rectangle obj;
    cout<<obj.calculate();
    return 0;
}
