#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    pid_t pid;
    if((pid=fork())<0)
    {
        printf("fork error!\n");  /*创建新进程*/
        exit(1);
    }
    else if(pid==0)  /* 新创建的子进程*/
    {
        printf("in the child process!\n");
    }
    else
    {
        printf("in the parent process!\n");
    }
    exit(0);
}