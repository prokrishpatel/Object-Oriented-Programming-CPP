#include<stdio.h>
void increment();
main()
{
	increment();
	increment();
	increment();
}
void increment()
{
	static int a=1;
	printf("\n%d",a);
	a++;
}
