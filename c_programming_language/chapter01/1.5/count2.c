//
// Created by 25858 on 2022/01/26.
//
#include <stdio.h>
/* count characters in input; 2nd version */
main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
