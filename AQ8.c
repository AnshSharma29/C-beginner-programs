#include<stdio.h>
int main()
{
int n1,n2,*p1,*p2,a,s,m,d;
p1=&n1;
p2=&n2;
printf("\nEnter number:");
scanf("%d",&n1);
printf("\nEnter number:");
scanf("%d",&n2);
a=*p1+*p2;
printf("\nAddition:%d",a);
s=*p1-*p2;
printf("\nSubtraction:%d",s);
m=(*p1)*(*p2);
printf("\nMultiplication:%d",m);
d=(*p1) / (*p2);
printf("\nDivision:%d",d);
}

