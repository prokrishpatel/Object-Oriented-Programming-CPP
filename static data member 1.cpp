//Static data member(or class variable/member)
#include<iostream>
using namespace std;
class addmision
 {    static int registration;
      int marks;
     public:
     void add()
         {   
            cout<<"enter last year marks :";
            cin>>marks;
            registration++;
         }
   void display()
    { 
        cout<<"your registration no is: "<<registration<<endl;
    }
}; 
int addmision :: registration=1210;  // definition of static data member
 int main(){    
addmision obj1,obj2,obj3,obj4,obj5;
 obj1.add();
 obj1.display();
 obj2.add();
 obj2.display();
 obj3.add();
 obj3.display();
 obj4.add();
 obj4.display();
 obj5.add();
 obj5.display();
}

