#include <stdio.h>

int *max(int *x, int *y)
{
    if (*x > *y)
        return x;
    else
        return y;
}

int main()
{
    int a = 100, b = 70, *c;
    int *aptr = &a;
    int *bptr = &b;

    c = max(aptr, bptr);

    if (c == aptr)
        printf("1st number is greater\n");
    else
        printf("2nd number is greater\n");

    return 0;
}
