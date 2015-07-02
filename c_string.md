##1. 字符串分割
    strtok, strtok_r - extract tokens from strings
    SEE ALSO
           index(3), memchr(3), rindex(3), strchr(3), string(3), strpbrk(3), strsep(3), strspn(3), strstr(3), wcstok(3)
    example:
       An example of the output produced by this program is the following:

``` bash
           $ ./a.out 'a/bbb///cc;xxx:yyy:' ':;' '/'
           1: a/bbb///cc
                    --> a
                    --> bbb
                    --> cc
           2: xxx
                    --> xxx
           3: yyy
                    --> yyy
```
``` c
       //Program source
           #include <stdio.h>
           #include <stdlib.h>
           #include <string.h>

           int
           main(int argc, char *argv[])
           {
               char *str1, *str2, *token, *subtoken;
               char *saveptr1, *saveptr2;
               int j;

               if (argc != 4) {
                   fprintf(stderr, "Usage: %s string delim subdelim\n",
                           argv[0]);
                   exit(EXIT_FAILURE);
               }

               for (j = 1, str1 = argv[1]; ; j++, str1 = NULL) {
                   token = strtok_r(str1, argv[2], &saveptr1);
                   if (token == NULL)
                       break;
                   printf("%d: %s\n", j, token);

                   for (str2 = token; ; str2 = NULL) {
                       subtoken = strtok_r(str2, argv[3], &saveptr2);
                       if (subtoken == NULL)
                           break;
                       printf(" --> %s\n", subtoken);
                   }
               }

               exit(EXIT_SUCCESS);
           }
```

##2. string to int
	atoi, atol, atoll, atoq - convert a string to an integer

``` bash
	strdup
	strcpy

	strcmp


	assert

```