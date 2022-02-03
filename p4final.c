#include<stdio.h>
int input()
{
  int a;
  printf("enter the size of the array:\n");//b[5]=[2,4,6,8,10]
  scanf("%d",&a);
  return a;
}
void input_ar(int a,int b[a])
{
  for (int i=0;i<a;i++)//i<5---i=4
  {
    printf("enter the values into the array\n");
    scanf("%d",&b[i]);//b[4]=10
  }
}

int sum(int n,int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)//i=5
  {
    sum=sum+a[i]; //sum=30
  }
  return sum;//sum=30
}
void output(int n,int a[n],int sum)
{
  int i;
  for (i=0;i<n-1;i++)//i=4
  {
    printf("%d+",a[i]);//2+4+6+8+10 is 30
  }
  printf("%d is %d\n",a[i],sum);
}
int main()
{
  int a,s;//a=12236//b[12236]
  a=input();//a=5
  int b[a];//b[5]
  input_ar(a,b);
  s=sum(a,b);
  output(a,b,s);
  return 0;
}
