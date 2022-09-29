// automatic storage class
#include<stdio.h>
main()
{
	auto int i=1;
	{
		int i=2;
		{
			int i = 3;
			printf("\n%d",i);//3
		}
	printf("\n%d",i);//2
	}
	printf("\n%d",i);//1
}

