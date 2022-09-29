#include<stdio.h>
int fibo(int x);
int main()
{
	int n, result,i;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	result = fibo(i);
	printf("%d\n",result);
    }
	return 0;
}
int fibo(int x)
{
	if(x==0 || x==1)
	return x;
	else
	return (fibo(x-1)+fibo(x-2));
}
