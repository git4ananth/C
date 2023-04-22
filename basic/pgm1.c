/*
Given three variables x,y,z. Write a function to circularly shift
their values to right. Call the function with variables a,b,c to
circularly shift values.*/

#include <stdio.h>

void circular_shift(int a, int b, int c);

int main()
{
    int x = 5, y = 8, z = 10;
    printf("Value before shift x = %d, y = %d, z = %d\n", x, y, z);
    circular_shift(x, y, z);
}

void circular_shift(int a, int b, int c)
{
    int temp1 = a;
    int temp2 = b;
    a = c;
    b = temp1;
    c = temp2;

    printf("values after shift x = %d, y = %d,z = %d", a, b, c);
}