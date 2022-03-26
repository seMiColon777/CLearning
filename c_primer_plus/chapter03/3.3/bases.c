//
// Created by Hodor on 2022/3/26.
//
#include "stdio.h"

int main(void) {
    int x = 100;
    printf("des = %d; octal= %o; hex=%x\n", x, x, x);
    printf("des = %d; octal= %#o; hex=%#x\n", x, x, x);
}
