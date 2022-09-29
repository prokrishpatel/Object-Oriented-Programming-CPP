#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
float *h=NULL;
h=new float;	
float *b=NULL;
b=new float;
if(b==NULL && h==NULL)
{
    cout<<"\n Memory allocation failure";
    exit(1);
}
else
{
cout<<"Memory allocated successfully\n";
cout<<"enter Base and Height : ";
cin>>*b>>*h;

cout<<"\narea of a triangle "<<(0.5)*(*b)*(*h);
delete b;
delete h;
cout<<"\n Memory deallocated";
}
return 0;
}

