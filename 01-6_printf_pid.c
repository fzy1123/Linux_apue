#include<stdio.h>
#include"apue.h"
#include<dirent.h>

int main(int argc,char*argv[])
{
    printf("process id %ld\n",(long)getpid());
    exit(0);
}
