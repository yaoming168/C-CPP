#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
/*
vfork()与fork()两者的区别在于创建子进程时，fork函数会复制所有的父进程的资源，包括进程环境、内存资源等，
而vfork函数在创建子进程时不会复制父进程的所有资源。
*/
int gvar=2;
int main(void)
{
    pid_t pid;
    int var=5;
    printf("process id:%ld\n",(long)getpid());
    printf("gvar=%d var=%d\n",gvar,var);
    if((pid=vfork())<0) /*创建一个新进程*/
    {
        perror("error!");
        return 1;
    }
    else if(pid==0) /*子进程*/
    {
        gvar--;
        var++;
        printf("the child process id:%ld\ngvar=%d var=%d\n",(long)getpid(),gvar,var);
        _exit(0);
    }
// 父进程
        printf("the parent process id:%ld\ngvar=%d var=%d\n",(long)getpid(),gvar,var);
        return 0;
    
}