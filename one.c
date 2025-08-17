#include<stdio.h>
int main()
{
printf("Enter the two numbers:\n");
int a,b;
scanf("%d%d",&a,&b);
if(a>b)
{
printf("A is greater than B.\n");
printf("B is smaller than A.");
}
else
{
printf("B is greater than A.\n");
printf("A is smaller than B.");
}
return 0;
}
