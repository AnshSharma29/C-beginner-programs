#include<stdio.h>
#include<conio.h>
int main()
{int a[55],i,n;
float sum=0,average;
printf("enter the number of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter marks of student:");
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{sum=sum + a[i];}
average=sum/n;
printf("average marks of student: %f",average);
return 0;}

