#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    ptr1 = (int *)malloc(sizeof(int) * 3);
    ptr2 = (int *)malloc(sizeof(int));
    ptr3 = (int *)malloc(sizeof(int));
    int t = 0;
    int count = 0;
    int size = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ptr1[i]);
    }
    for (int i = 1; i < 3 + 1; i++)
    {
        scanf("%d", &ptr2[i - 1]);
        ptr2 = (int *)realloc(ptr2, i * (sizeof(int)));
        size++;
    }
    for (int i = 1; i < 3 + 1; i++)
    {
        scanf("%d", &ptr3[i - 1]);
        ptr3 = (int *)realloc(ptr3, i * (sizeof(int)));
    }
    if (size != ptr1[0])
    {

        printf("INVALID");
        exit(0);
    }

    while (count < ptr1[2])
    {
        t++;
        for (int i = 0; i < ptr1[0]; i++)
        {
            if (t == ptr2[i])
            {
                count += 1;
                ptr2[i] += ptr3[i];
            }
        }
    }
    printf("%d", t);
}