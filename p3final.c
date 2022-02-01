#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the value:");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int sum)
{
  printf("Sum is %d",sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(sum);
  return 0;
}