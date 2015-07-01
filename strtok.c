/**
 * @file Name    : strtok.c
 * @brief        : 
 * @author       : dwlinux
 * @mail         : dwliangzhen@126.com
 * @created Time : Wed 01 Jul 2015 03:49:39 PM CST
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char string[] = "abcd={\"json, llll\"}";
    char *next = strtok(string, "=");
    //next = strtok(NULL, "=");

    printf(" string = %s\n next = %s\n",string, next);
    return 0;
}
