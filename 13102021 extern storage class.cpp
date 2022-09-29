#include<stdio.h>
void check();
int a=5;
main()
{
a=a+5;
check();
}
void check()
{
++a;
printf("%d",a);
}
