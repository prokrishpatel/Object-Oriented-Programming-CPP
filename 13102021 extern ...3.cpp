#include<stdio.h>
void increment(void);
void decrement(void);
int i=0;
main()
{
printf("\ni=%d",i); //0
increment();
increment();
decrement();
decrement();
}
void increment()
{
i=i+1; // 0+1 1+1
printf("\n On incrementing i=%d",i); //1 2
}
void decrement()
{
i=i-1; // 2-1 1-1
printf("\n On decrementing i=%d",i); //1 0
}
