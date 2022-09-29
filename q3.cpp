/*Create a class area, which must have necessary member 
functions for generating areas for different shapes
[Take any 10 mathematical shapes for area calculations]
. Define all member functions outside of the class but
 they must be inline in nature. Use array of objects 
 concept as well to work with numerous values for a 
 single shape*/
 #include<iostream>
 using namespace std;
 class area
 {
 	int s,l,b,r,h;
 	public:
 	void input()
 	{   int i;
 		cout<<"For which shape do you want to find area,\n";
 		cout<<"for square press 1\nfor rectangle press 2\nfor parallelogram press 3\nfor rhombus press 4\nfor trapezoid press 5\n";
 		cout<<"for circle press 6\nfor ellipse press 7\nfor right triangle press 8\nfor triangle press 9\nfor equilateral triangle press 10";
 		cin>>i;
 		if (i=1)
 		{
 			cout<<"enter side : ";
 			cin>>s;
		}
	}
	void square(int a);
 };
 inline void area::square()
{
    cout<<"\nValues of a and b are:"<<a<<" "<<b;
}
 int main()
 {
 	area obj1;
 	obj1.input();
 }
