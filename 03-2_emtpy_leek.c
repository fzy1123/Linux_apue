#include<stdio.h>
#include"apue.h"
#include<dirent.h>
#include<fcntl.h>

char    buf1[] = "abcdefghij";
char    buf2[] = "ABCDEFGHIJ";

int main(int argc,char*argv[])
{
    int     fd;
    if((fd = creat("file.hole",FILE_MODE)) < 0)
            err_sys("creat error");
    
    if(write(fd,buf1,10) != 10)
            err_sys("creat error");
    
    if(lseek(fd,16384) < 0)
            err_sys("creat error");
    
    if((fd = creat("file.hole",FILE_MODE)) < 0)
            err_sys("creat error");
    
    if((fd = creat("file.hole",FILE_MODE)) < 0)
            err_sys("creat error");
    exit(0);
}
