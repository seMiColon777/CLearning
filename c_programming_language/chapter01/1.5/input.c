//
// Created by 25858 on 2022/01/26.
//
#include <stdio.h>
/* copy input to output; 1st version */
main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
