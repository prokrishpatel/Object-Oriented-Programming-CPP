#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    string str;
    char ch;
    int count=0;
    ifstream volr("vowel_ex.txt");
    if(!volr)
    {
        cout<<"\nSorry File Could Not Be Opened";
        exit(1);
    }
    ch=volr.get();
   while(ch!=EOF)
    {
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
      {   
          count++;
      }
      ch=volr.get();
    }
    volr.close();
    ofstream volw("total_vowel.txt");
    if(!volw)
    {
      cout<<"\nSorry File Could Not Be Opened";
      exit(1);
    }
    volw<<"Totel No. of Volwel in vowel_ex file are "<<count;
    cout<<"Taxk Done You Can Check Thankyou";
    return 0;
}
