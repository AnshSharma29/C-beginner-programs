#include<stdio.h>
#include<conio.h>

int main()         
{
int a[]={30,40,63,76,12},i,num,flag=0,index,temp,j;

printf("enter the number you want to check:");
scanf("%d",&num);

for(i=0;i<5;i++)
{
if(num==a[i])
flag=1;
index=i;
}

if(flag==1)

printf("%d is present in array at index %d",num,index);

else

printf("Number is not present in array");

for(i=0;i<5;i++)
{

for(j=i+1;j<5;j++)
{

if(a[i] > a[j])
{

temp=a[i];
a[i]=a[j];
a[j]=temp;

         }
   }
}

printf("\n Arrays elements in ascending order:");

for(i=0;i<5;i++)
{

printf("\n%d",a[i]);

}
}

