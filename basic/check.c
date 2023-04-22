#include <stdio.h>

int main()
{
    int arry2[2] = {4,5};
    sizeof(arry2);
    arry2[0] = 5;
    arry2[1] = 6;

    printf("%d\n", sizeof(arry2));
    int len = sizeof(arry2) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arry2[i]);
    }
    printf("%d\n", arry2);
}