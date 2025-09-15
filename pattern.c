#include<stdio.h>
void pattern(int n)
{
    int i,j;
    int rows=3;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1 && j%4==1)|| (i==2 && j%2==0)||(i==3 && j%4==3))
            {
                printf("%2d",j);
            }else{
                 printf(" ");
            }
        }
        printf("\n");
    }N
}
void main()
{
    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    pattern(n);
}
