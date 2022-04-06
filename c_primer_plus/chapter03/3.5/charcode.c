//
// Created by Hodor on 2022/4/6.
//
#include "stdio.h"

int main(void) {
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
    return 0;
}
