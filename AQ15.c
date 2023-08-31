#include<stdio.h>

struct employee

{
 int id;
 char name[50];
 int age;
 char dept[10];
 int salary;
};


int main()

{
 int i,j,n;
 struct employee data[10];

 for(i=0;i<10;i++)
 {
 printf("Enter id of employee %d\n",i+1);
 scanf("%d",&data[i].id);

 printf("Enter name of employee %d\n",i+1);
 scanf("%s",&data[i].name);

 printf("Enter age of employee %d\n",i+1);
 scanf("%d",&data[i].age);

 printf("Enter department of employee %d\n",i+1);
 scanf("%s",&data[i].dept);

 printf("Enter salary of employee %d\n",i+i);
 scanf("%d",&data[i].salary);
 }

 printf("Enter the id of employee you want to know\n");
 scanf("%d",&n);

 for(i=0;i<10;i++)
 {

 if(n==data[i].id)
 {
 printf("Details of the employee are\n");
 printf("id=%d ,name=%s ,age=%d ,department=%s ,salary = %d\n",data[i].id,data[i].name,data[i].age,data[i].dept,data[i].salary);

 }
 }
}
