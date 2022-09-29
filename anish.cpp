#include<iostream>
#include<fstream>
using namespace std;
class book
{
int Book_id;
float Book_price;
char Book_name[20];
char Book_author_name[15];
public :
void input()
{
cout<<"\nBook Price: ";
cin>>Book_price;
if(Book_price>500)
{
cout<<"price is greater than 500 try again";
cout<<"Book Price : ";
cin>>Book_price;
}
cout<<"\nBook ID: ";
cin>>Book_id;
cout<<"\nBook Name: ";
cin>>Book_name;
cout<<"\nBook Author Name: ";
cin>>Book_author_name;
}
void display()
{
cout<<"Book Id: "<<Book_id<<endl;
cout<<"Book Price: "<<Book_price<<endl;
cout<<"Book Name: "<<Book_name<<endl;
cout<<"Book Auther Name: "<<Book_author_name<<endl;
}
};
int main()
{ 
   
int n;
cout<<"Enter the Total Number of Books : ";
cin>>n;
book obj[n], obj1;
fstream b;
b.open("record",ios::app|ios::in|ios::binary);
for(int i=0;i<n;i++)
{
cout<<"Enter the record for book \n";
obj[i].input();
b.write((char*)&obj[i],sizeof(obj[i]));
}
cout<<"Book record is saved sucessfully\n\n";
cout<<"Enter book record number you want to see\n";
int loc,x;
cin>>x;
loc=(x-1)*sizeof(obj1);
b.seekg(loc);
b.read((char*)&obj1,sizeof(obj1));
obj1.display();
b.close();
cout<<"Enter book record number you want to update\n";
int x1,loc1;
cin>>x1;
loc1=(x1-1)*sizeof(obj1);
b.open("record",ios::out|ios::in|ios::ate|ios::binary);
int num_objects=b.tellp()/sizeof(obj1);
b.seekp(loc1);
cout<<"Enter new record: \n";
obj1.input();
b.write((char*)&obj1,sizeof(obj1));
cout<<"Record updated\n";
b.seekg(0);
cout<<"Book Records: \n";
for(int i=0;i<num_objects;i++)
{
cout<<i+1<<endl;
b.read((char*)&obj1,sizeof(obj1));
obj1.display();
}
b.close();
return 0;
}
