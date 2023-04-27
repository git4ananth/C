// Complete the function void update(int *a,int *b). It receives two integer pointers,
// int* a and int* b. Set the value of to their product, and to their sum.
// There is no return value, and no return statement is needed.

// #include <stdio.h>

// void update(int *a, int *b);

// int main()
// {
//     int a = 4;
//     int b = 5;
//     int c = 8;
//     int d = 7;
//     int x = 10.5;
//     int y = 4.5;
//     update(&a, &b);
//     printf("%d, %d", a, b);
//     // update(&c, &d);
//     // update(&x, &y);
// }

// void update(int *a, int *b)
// {
//     int product = (*a) * (*b);
//     int sum = (*a) + (*b);
//     *a = product;
//     *b = sum;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void update(int *a, int *b);
int main()
{
    char a[50], b[50];
    scanf("%s", a);
    scanf("%s", b);
    int A = 0, B = 0;

    for (int j = 0; a[j] != '\0'; j++)
    {
        if (a[j] == '.')
        {
            printf("Invalid");
            exit(1);
        }
        else
        {
            int num = a[j] - 48;
            A = A * 10 + num;
        }
    }
    for (int j = 0; a[j] != '\0'; j++)
    {
        if (b[j] == '.')
        {
            printf("Invalid");
            exit(1);
        }
        else
        {
            int num = b[j] - 48;
            B = B * 10 + num;
        }
    }

    update(&A, &B);
    printf("%d\n%d", A, B);
    return 0;
}
void update(int *a, int *b)
{
    *a = (*a) * (*b);
    *b = (*a) / (*b) + (*b);
}
