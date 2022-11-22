#include<stdio.h>
#include"apue.h"
#include<dirent.h>

int main(int argc,char*argv[])
{
    if(lseek(STDIN_FILENO,0,SEEK_CUR) == -1)
        printf("cannot seek\n");
    else
        printf("uid = %d,gid = %d\n",getuid(),getgid());
    exit(0);
}
