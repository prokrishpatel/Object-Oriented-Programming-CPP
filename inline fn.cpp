#include <iostream>
using namespace std;
inline int Max(int x, int y) {
   return (x > y)? x : y;
}
int main() {
   cout << "Max (20,10): " << Max(20,10)/*(x > y)? x : y */<< endl;
   cout << "Max (0,200): " << Max(0,200)/*(x > y)? x : y */ << endl;
   cout << "Max (100,1010): " << Max(100,1010)/*(x > y)? x : y */ << endl;
   return 0;
}

