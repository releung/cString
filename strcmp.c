/**
 * @file Name    : strcmp.c
 * @brief        : 
 * @author       : dwlinux
 * @mail         : dwliangzhen@126.com
 * @created Time : Fri 03 Jul 2015 04:28:10 PM CST
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *src = "stop=600";
    char *dec = "stop";

    if(!strncmp(src, dec, strlen(dec)))
        printf("ok----\n");
    else
        printf("fail---\n");

    return 0;
}
