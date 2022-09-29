
//pointer to pointer
#include<stdio.h>
int main()
{
	int i=3,*j,**k;
	j=&i;
	k=&j;
	printf("\nvalue of i=%d",i);
	printf("\nvalue of address of i =%d",j);
	printf("\nvalue of *j = %d",*j);
	printf("\nvalue of address of j =%d",&j);
	printf("\nvalue of address of j = %d",k);
	printf("\nvalue of **k =%d",**k);
	printf("\nvalue of address of k =%d",&k);
	}
	//pointer to pointer means that a variable can be declacred which can store the address of the other variable
	
