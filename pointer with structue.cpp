#include<stdio.h>
struct abc
{
	int a;
	float b;
};
main()
{
	struct abc x;
	struct abc *p =&x;
	int i;
	printf("enter any no and decimal no.:");

	scanf("%d%f",&p->a,&p->b);
	printf("entered no. are : %d, %f",p->a,p->b);
}
