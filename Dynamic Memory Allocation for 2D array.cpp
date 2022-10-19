#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int m;
int n;
int **matrix;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    cin>>m>>n;
    matrix = new int*[m];
    for (int i = 0; i < m; i++)
    {
        matrix[i] = new int[n];
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
