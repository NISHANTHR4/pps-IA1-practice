#include<stdio.h>
void input(int *a,int *b)
{
printf("Enter any 2 numbers\n");
scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
*sum= a+b;
}
void output(int a,int b,int sum)
{
printf("The sum of %d and %d is = %d\n",a,b,sum);
}
void main()
{
  int a,b,sum;
input(&a,&b);
add(a,b,&sum);
output(a,b,sum);
}