//
// Created by 25858 on 2022/02/07.
//
/* strlen: return length of string s */
#include <ctype.h>
int strlen(char *s)
{
    int n;
    for (n = 0; *s != '\0'; s++) {
        n++;
    }
    return n;
}
