#include<iostream>
using namespace std;
class academics
{
        protected:
                int studies;
                public:
                void get_data()
                {
                cout<<"studies: ";
                cin>>studies;
                }
};
class sports
{
        protected:
                int sports_wt;
                public:
                void input()
                {
                    cout<<"sports :";
                    cin>>sports_wt;
                }
};
class result:public academics,public sports

{
	float avg;
        public:
                void calculate()
                {
                	avg=float(studies+sports_wt)/2;
                	cout<<"avg : ";
                	cout<<avg;
				}
};
int main()
{
       result r;
       r.get_data();
       r.input();
       r.calculate();
}


