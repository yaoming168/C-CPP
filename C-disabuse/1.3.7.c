#include<stdio.h>

struct st{
    int a,b;
    double f;
}s, *ps;

int main()
{
    double a = 6.8;
    double *pd = &a;

    float b = 6.5;
    float *pf = &b;

    char c = 'G';
    char *pc = &c;

    int *p = NULL;

    printf("%d %d %d %d %d\n",
        sizeof(pd),sizeof(pf),sizeof(pc),sizeof(p));

    return 0;
}