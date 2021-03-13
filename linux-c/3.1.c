#include<stdlib.h> 
#include<stdio.h>

int main()
{
    char *p;
    p = (char *)malloc(100);  /*为指针p开辟一个内存空间*/
    if(p) /*判断内存分配成功与否*/
        printf("Memory Allocated at:%x",p);
    else
        printf("Not Enough Memory!\n");
    getchar();
    p=(char*)realloc(p,256); /*调整p内存空间从100字节到256字节*/
    if(p)
    {
        printf("Memory Reallocated at:%x",p);
    }
    else
    {
        printf("Not Enough Memory!\n");
    }
    free(p); /*释放p所指向的内存空间*/
    getchar();
    return 0;

}