#include<stdio.h>
void sum(int*p1,int*p2)
{
    int c= *p1+*p2;
    printf("\nSum is %d ",c);
}
void main()
{
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum(p1,p2);
}
