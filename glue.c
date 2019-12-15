#include<stdio.h>
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);

int main(void)
{
    int XNAME(1) = 14;
    int XNAME(2) = 20;

    int x3 = 30;
    return 0;
}