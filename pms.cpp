#include<iostream>
#include<fstream>
using namespace std;
class login;
class registration
{
	string name1,name2,name3,address;
    int pin, repin;
	long long int mobile_no;
	int registration_no;
	public:
	
		void input()
		{
			cout<<"\t\t\t\t\tP.M.S. Registration\n";
			cout<<"Please Fill the Following Details for registering to PMS Multai\n";
			cout<<"First Name: ";
			cin>>name1;
			cout<<"\n";
			cout<<"Middle Name: ";
			cin>>name2;
			cout<<"\n";
			cout<<"Last Name (Bhadani/Chhabhiya..): ";
			cin>>name3;
			cout<<"\n";
			cout<<"Mobile No.: ";
			cin>>mobile_no;
			cout<<"\n";
			cout<<"Address : ";
			cin.ignore();
	    	getline(cin,address);
	    	cout<<"\n";
		}
	void set_pass()
    { 
        cout<<"Set a 4 digit strong Pin to protect your PMS Account\n";
        cout<<"Pin: \t";
        cin>>pin;
        cout<<"\n";
        cout<<"Conform Pin: \t";
        cin>>repin;
        while(pin!=repin)
        {
        cout<<"entered pin are not same please set again \n";
        cout<<"Pin: \t";
        cin>>pin;
        cout<<"\n";
        cout<<"Conform Pin: \t";
        cin>>repin;
		}
	}
    void show_registration(int lr)
    {

    if(lr==0)
    {
	registration_no=202201	;
	}
	else
	{
	registration_no=lr+1;
    }
	cout<<"\n\nCongratulations!! Now you are the Member of KKPS MULTAI ON PMS\n";
    cout<<"Registration no.: "<<registration_no;
	cout<<"\nName: "<<name1<<" "<<name2<<" "<<name3<<"\n";
	cout<<"Mobile No.: "<<mobile_no<<"\n";
	cout<<"Address: "<<address<<"\n\n";
    }
    int last_registration()
    {
    	return registration_no;
	}
     void enter_registration();
     friend class login;
};
   
	void registration::enter_registration()
	{
		
	 fstream member;
	 member.open("registration_book",ios::app|ios::binary);
	 member.write((char*)this,sizeof(*this));
	 member.close();
    }
class login
{ 
   int pass,r;
	public:
	
};    
int main()
{    
    registration objr,objl;
    int e,getp,loc;
    int old_r;
	cout<<"\t\t\t\tSHREE KUTCH KADVA PATIDAR SAMAJ MULTAI\n\t\t\t\t\t\tWelcome To \n\t\t\t\t\tPatidar Management System\n";
	cout<<"If you are new to PMS then Press 1\n            Or        \nAllredy have account then press 2:\n";
	cin>>e;
	cout<<"\n\n";
	if(e==1)
	{		
     objr.input();
     fstream l;
	 l.open("registration_book",ios::in|ios::binary|ios::ate);
	 getp=l.tellg();
	 loc=(getp-(sizeof(objr)));
	 l.seekg(loc);
	 l.read((char*)&objl,sizeof(objl));
     old_r=objl.last_registration();
	 l.close(); 
     objr.set_pass();
     objr.show_registration(old_r);
     objr.enter_registration();
	}
    else if(e==2)
	{
		
	} 
}
