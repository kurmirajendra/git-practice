#include<stdio.h>
void max(int *x,int *y)
{
  if(*x>*y)
    printf("1st no is bigger");
  else
    printf("\n2nd no is bigger");
}
void main()
{
  int a =10,b=7;
  int *aptr=&a;
  int *bptr=&b;
  max(*aptr,bptr);
}
