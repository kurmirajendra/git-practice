#include <stdio.h>

int sum(int *p1, int *p2) {
    int res = *p1 + *p2;   // add values pointed by p1 and p2
    return res;            // return the result directly
}

int main() {
    int a = 10, b = 20, c;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    c = sum(p1, p2);       // calling function
    printf("Sum is %d\n", c);

    return 0;
}
