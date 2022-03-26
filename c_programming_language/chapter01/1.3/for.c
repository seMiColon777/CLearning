//
// Created by 25858 on 2022/01/26.
//
#include <stdio.h>
/*打印华氏温度—摄氏温度对照表*/
main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
