//
// Created by 25858 on 2022/01/27.
//
/* trim: remove trailing blanks, tabs, newlines */
#include <string.h>

int trim(char s[])
{
    int n;
    for (n = strlen(s)-1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n+1] = '\0';
    return n;
}
