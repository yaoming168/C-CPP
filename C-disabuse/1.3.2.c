#include<stdlib.h>

int main()
{
    int a = 65;
    int addr;
    addr = 0x0012ff7c;
    printf("0x%p, 0x%p, 0x%p\n", &a, addr, (int*)addr);
    printf("%d, %d\n, %d\n", a, *&a, *(int*)addr);
    return 0;
}