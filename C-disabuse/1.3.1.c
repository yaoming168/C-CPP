#include<stdio.h>

int main()
{
    int a = 65;
    int addr;
    addr = 0x0012ff7c;
    printf("0x%p, 0x%p, 0x%p\n", &a, addr, &addr);
    printf("%d, %d, 0x%p\n", a, *&a, *&addr);
    return 0;
}