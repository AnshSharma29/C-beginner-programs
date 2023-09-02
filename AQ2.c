
#include<stdio.h>
#include<conio.h>

void main()

{ 
int x,y,z;
  printf("enter the first number");
  scanf("%d",&x);

  printf("\nenter the second number");
  scanf("%d",&y);

  printf("\nenter the third number");
  scanf("%d",&z);

  if (x>y && x>z)
  printf("%d is the greatest number",x);

  else if (y>x && y>z)
  printf("%d is the greatest number",y);

  else
  printf("%d is the greatest number",z);

}

