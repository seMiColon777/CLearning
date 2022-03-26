//
// Created by Hodor on 2022/3/26.
//
#include "stdio.h"

int main(void) {
    int i = 21447483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, j + 1, i + 2);
    printf("%u %u %u\n", i, j + 1, i + 2);
    return 0;
}
