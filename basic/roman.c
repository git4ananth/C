#include <stdio.h>

void roman(int n)
{
    while (n > 0)
    {
        if (n > 1000)
        {
            printf("M");
            n -= 1000;
        }
        else if (n >= 500)
        {
            printf("D");
            n -= 500;
        }
        else if (n >= 100)
        {
            printf("C");
            n -= 100;
        }
        else if (n >= 50)
        {
            printf("L");
            n -= 50;
        }
        else if (n >= 10)
        {
            printf("X");
            n -= 10;
        }
        else if (n >= 5)
        {
            printf("V");
            n -= 5;
        }
        else if (n >= 1)
        {
            printf("I");
            n -= 1;
        }
    }
}