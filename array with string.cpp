#include<iostream>
 using namespace std;
 int main()
{
   string s1="Hello";
   for(int i=0;i<s1.length();i++)
   {
       cout<<s1[i]<<" ";
       cout<<s1.at(i);
   }
   return 0;
}

