#include<stdio.h> 

int main() 
{ 
int n,opt,arm=0,r,c,i,count,num,reverse=0,remainder; 
printf("Enter the number\n"); 
scanf("%d",&n); printf("enter your option : \n"); 
printf("1-Check armstrong.\n2-Prime numbers.\n3-Reverse no.\n"); scanf("%d",&opt); 
switch (opt) 
{ 
case 1: c=n; while(n>0)
{
 r=n%10; 
arm=(r*r*r)+arm; 
n=n/10; 
} 
if(c==arm)
{ 
printf("%d is a armstrong number\n",n); 
} 
else
{ 
printf("%d is not a armstrong number\n",n); 
} 
break; 
case 2: for(i=1;i<=n;i++)
{ 
if(n%i==0)
{ 
count++; 
} 
} 
for(num = 1;num<=n;num++)
{ 
count = 0; 
for(i=2;i<=num/2;i++)
{ 
if(num%i==0)
{ 
count++; 
break; 
} 
} 
if(count==0 && num!= 1) 
printf("%d ",num); 
}
break; 
case 3: while (n != 0) 
{ 
remainder = n % 10; 
reverse = reverse * 10 + remainder; n /= 10; 
} 
printf("Reversed number = %d", reverse); 
break; 
} 

}

