#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Inner Catchn";
            throw;
        }
    }
    catch (int x)
    {
        cout << "Outer Catchn";
    }
    return 0;
}



