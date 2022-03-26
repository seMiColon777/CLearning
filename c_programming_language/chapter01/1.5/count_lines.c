//
// Created by 25858 on 2022/01/26.
//
#include <stdio.h>
/* count lines in input */
main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
