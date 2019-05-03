#include<stdio.h>
int add1(int m)
{
  return m+1;
}
int main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("%d+1=%d",a,add1(a));
  
}
