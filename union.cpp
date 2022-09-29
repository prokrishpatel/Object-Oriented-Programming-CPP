#include <iostream>
using namespace std;
union employee
{
    char emp_name[100];
    int emp_id,emp_salary;
   
};
int main()
{
    employee obj[3];//array
    
    for(int i=0;i<3;i++)
    {
    	cout<<"\nenter employee name:";
        cin>>obj[i].emp_name;
        cout<<"\nenter id:";
        cin>>obj[i].emp_id;
        cout<<"\nenter salary:";
        cin>>obj[i].emp_salary;
        
    }
    cout<<obj[1].emp_id;
    }
   
   
   
   

