//
// fathm_ft.c -- 把2英寻转换成英尺
// Created by Bin on 2022/3/19.
//
#include <stdio.h>
int main(void) {
    int feet, fathom;
    fathom = 2;
    feet = 6 * fathom;
    printf("There are %d feet in %d fathoms!\n", feet, fathom);
    printf("Yes, I said %d feet!\n", 6 * fathom);
    return 0;
}
