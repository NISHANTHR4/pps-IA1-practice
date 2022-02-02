#include<stdio.h>
int input()
{
  int a;
printf("Enter any three numbers to compare\n");
scanf("%d",&a);
return a;
}
int cmp(int a, int b, int c)
{
  int largest;
if(a>=b&&a>=c)
largest = a;
if(a<=b && b>=c)
largest = b;
else
largest = c;
return largest;
}
void output(int num)
{
  int a,b,c,largest;
printf("The largest number  is %d\n",num);
}
void main()
{
  int a,b,c,largest,num1,num2,num3,cmpr,num;
num1=input();
num2=input();
num3=input();
cmpr=cmp(num1,num2,num3);
output(cmpr);
}