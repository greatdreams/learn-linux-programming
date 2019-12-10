//
// Created by greatdreams on 2019/12/10.
//

#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc, char **argv)
{
    int fd;
    fd = open("/etc/profile", O_RDONLY|O_RDWR);
    if(fd == -1)
    {
        printf("some errors occurs when opening file /etc/profile in read and write mode\n");
    }
    fd = open("/etc/profile", O_RDONLY);
    if(fd == -1)
    {
        printf("some errors occurs when opening file /etc/profile in readonly mode\n");
    }
    return 0;
}