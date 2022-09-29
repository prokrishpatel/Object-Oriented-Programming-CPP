#include <iostream>
using namespace std;
class sample {
   public:
      sample() {
         cout << "Constructor called!" <<endl;
      }
      ~sample() {
         cout << "Destructor called!" <<endl;
      }
};
int main() {
   int n;
   cout<<"\n Enter no. of objects:";
   cin>>n;
   sample* obj1 = new sample[n];//Array of objects//new will create the dynamic object(memory is also allocated)
   delete [] obj1; // Delete array
   return 0;
}
