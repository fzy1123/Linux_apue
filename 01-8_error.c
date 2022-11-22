#include<stdio.h>
#include"apue.h"
#include<dirent.h>
#include<errno.h>

int main(int argc,char*argv[])
{
    fprintf(stderr,"EACCES:%s\n",strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    exit(0);
}
