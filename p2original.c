#include <stdio.h>
int input()
{
  int a;
  printf("Enter the value\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  {
    return a;
  }
  else if((b>a)&&(b>c))
  {
    return b;
  }
  else
  {
    return c;
  }
}
int output(int cmp)
{
  printf("The largest number is %d\n",cmp);
}
int main()
{
  int a,b,c,Ans;
 a=input();
 b=input();
 c=input();
 Ans=cmp(a,b,c);
 output(Ans);
 return 0;
}