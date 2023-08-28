#include<stdio.h>
#include<conio.h>

void main()

{
int n,a,div=0;
printf("enter the number");
scanf("%d",&n);

for(a=1;a<=n;a++)
{if(n%a==0)
div++;
}

if(div>2)
printf("%d is not a prime number",n);

else
printf("%d is a prime number:",n);

}

