#include <iostream>
using namespace std;
struct employee
{
    char emp_name[100];
    int emp_id,emp_salary;
    void input()
    {
        cout<<"\nEnter employee name,id and salary";
        cin>>emp_name>>emp_id>>emp_salary;
    } 
};
int main()
{
    employee obj[3];
    
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        
    }
    cout<<"employee information";
    for(int i=0;i<3;i++)
    {
        cout<<obj[i].emp_name<<"\t"<<obj[i].emp_id<<"\t"<<obj[i].emp_salary<<"\n";
    }
   
    return 0;
}
