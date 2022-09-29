#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin>>n;
    int programer[n];
    for (int i=0;i<n;i++)
        {cin>>programer[i];}
    cin>>m;
    int automobile[m];
    for(int i=0;i<m;i++)
        {cin>>automobile[i];}
    int final[m+n];    
    int j=0;
    for(int i=0;i<(n+m);i++)
    { 
        if(i<n)
        {
            final[i]=programer[i];
        }
        else
        {
          final[i]=automobile[j];
            j=j+1;
        }
    }
    for (int i=0;i<(n+m);i++)
       { cout<<final[i]<<" ";}
    cout<<endl;  
    int c=0;
    for(int i=0;i<m+n;i++)
    {
        
        if(final[i]%2==0)
        {
            cout<<i<<" ";
            c=1;
        }
    }
    if(c==0)
        cout<<"-1";
    return 0;
}

