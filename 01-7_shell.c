#include<stdio.h>
#include"apue.h"
#include<dirent.h>
#include<sys/wait.h>


int main(int argc,char*argv[])
{
    char    buf[MAXLINE];
    pid_t   pid;
    int     status;
    printf("%% ");
    while(fgets(buf,MAXLINE,stdin) != NULL)
    {
        if(buf[strlen(buf) - 1] == '\n')
        {

            buf[strlen(buf) - 1] = 0;
            printf("buf = %s\n",buf);
            printf("strlen = %d\n",strlen(buf));
        }

        if((pid = fork()) < 0){
            err_sys("fork error");
        }else if(pid == 0){
            execlp(buf,buf,(char *)0);
            err_ret("couldn t  execute: %s",buf);
            printf("not printf");
            exit(127);
        }

        if((pid = waitpid(pid,&status,0)) < 0)
            err_sys("waitpid error %d\n",status);

        printf("%% ");

    }
    exit(0);
}
