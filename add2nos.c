#include<stdio.h>
void getinput();
void add(int x, int y);
void output(int sum);
void getinput()
{
  int a,b;
  printf("Enter the two numbers:");
  scanf("%d%d",&a,&b);
  add(a,b);
}
void add(int x, int y)
{
  int c;
  c=x+y;
  output(c);
}
void output(int sum)
{
  printf("sum of the two numbers=%d",sum);
}
main()
{
  getinput();
}
