#include<iostream>
#include<fstream>
using namespace std;
class book
{   
    int id,price;
    char name[10],author_name[10];
	public :
		void input()
		{
			cout<<"\nBook ID: ";
			cin>>id;
			cout<<"\nPrice: ";
			cin>>price;
			if(price>500)
			{
			cout<<"Book price is greater than 500";  
			cout<<"\nPrice: ";
			cin>>price;
			}
			cout<<"\nBook Name: ";
			cin>>name;
			cout<<"\nBook Author Name: ";
			cin>>author_name;
		}
		void display()
		{
			cout<<"Book Id: "<<id;
			cout<<"\nBook Price: "<<price;
			cout<<"\nBook Name: "<<name;
			cout<<"\nBook Auther Name: "<<author_name;
		}

};
int main()
{    int n;
   cout<<"Total Number of Books : ";
   cin>>n;
	book obj[n], obj2, obj3,obj4;
	fstream b;
b.open("record",ios::out|ios::in|ios::binary);
	for(int i=0;i<n;i++)
	{
	   cout<<"Enter record "<<endl;
	   obj[i].input();
	   b.write((char*)&obj[i],sizeof(obj[i]));
	}
	cout<<"Enter The book record no you want access\n";
	
		int loc,x;
		cin>>x;
	    loc=(x-1)*sizeof(obj2);
	    b.seekg(loc);
	    b.read((char*)&obj2,sizeof(obj2));
	    obj2.display();
	    b.close();
	    cout<<"Enter The book record no you want to update\n";	
	    int x1,loc1;  
	   cin>>x1;
	   loc1=(x1-1)*sizeof(obj3);
	   b.open("record",ios::out|ios::in|ios::ate|ios::binary);
	   b.seekp(loc1);
	   cout<<"enter new record:\n";
	   obj3.input();
	 b.write((char*)&obj3,sizeof(obj3));
	   cout<<"Record updated Sucessfully\n";
	b.close();
	b.open("record",ios::in|ios::ate|ios::binary);
	int objects=b.tellp()/sizeof(obj3);
	 cout<<"Book Records: \n";
	 for(int i=0;i<objects;i++)
	 {
	 b.read((char*)&obj4,sizeof(obj4));
	 	obj4.display();
	 }
	 b.close();
	
	
	return 0;
}
