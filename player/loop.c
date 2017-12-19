#include<stdio.h>
int main(void)
{
int a,i,c=0,d=0;
scanf("%d",&a);
for (i=0;i<4;i++)
{
d=a*pow(10,i)+d;
c=d+c;}
printf("%d",c);
}
