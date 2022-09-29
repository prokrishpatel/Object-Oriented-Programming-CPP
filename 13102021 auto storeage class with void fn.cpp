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
	auto int a=1;
	printf("\n%d",a);
	a++;
}
