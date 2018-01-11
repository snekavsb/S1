#include<stdio.h>
void main()
{
count=0;
int n;
while(n!=0)
{
n=n/10;
++ count;
}
printf("%d",count);
}
