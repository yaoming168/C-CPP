#include<string.h>
#include<stdio.h>

int main(void)
{
    char s[] = "Welecom to mrsoft\n";
    printf("s before memset:%s\n",s);
    memset(s,'*',strlen(s)-1);
    printf("s after memset:%s\n",s);
    return 0;
}