#include <stdio.h>

/* печать таблицы соотношения температур в шкале по Фаренгейту и по Цельсию*/

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /*нижняя граница температур*/
    upper = 300; /*верхняя граница температур*/
    step = 20;   /*шаг*/

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}