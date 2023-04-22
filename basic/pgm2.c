/*
Write a function to compute the distance between two points and use it to
develop another function that will compute the area of the triangle whose
vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function
which returns a value 1 if the point (x, y) is inside the triangle ABC, otherwise a value 0.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float distance_calc(int x1, int y1, int x2, int y2);
double calc_area(int x1, int y1, int x2, int y2, int x3, int y3);
bool check_point(int x1, int y1, int x2, int y2, int x3, int y3, int xp, int yp);

int main()
{
    int x1, y1, x2, y2, x3, y3;
    x1 = 3;
    y1 = 4;
    x2 = 5;
    y2 = 6;
    printf("Distance between points is : %g units\n", distance_calc(x1, y1, x2, y2));
    printf("Area is : %lf\n", calc_area(3, 5, 2, 0, 5, 0));
    if (check_point(3, 5, 2, 0, 5, 0, 3, 1))
    {
        printf("Point is inside the triangle.\n");
    }
    else{
        printf("Point is not inside the triangle");
    }
}

float distance_calc(int x1, int y1, int x2, int y2)
{
    float distance = pow(pow(y2 - y1, 2) + pow(x2 - x1, 2), 0.5);
    return (distance);
}

double calc_area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a = distance_calc(x1, y1, x2, y2);
    float b = distance_calc(x1, y1, x3, y3);
    float c = distance_calc(x2, y2, x3, y3);

    float s = (a + b + c) / 2;

    double area = pow(s * (s - a) * (s - b) * (s - c), 0.5);
    return area;

    // double calc_area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

bool check_point(int x1, int y1, int x2, int y2, int x3, int y3, int xp, int yp)
{

    double area = calc_area(x1, y1, x2, y2, x3, y3);
    double area1 = calc_area(xp, yp, x2, y2, x3, y3);
    double area2 = calc_area(x1, y1, xp, yp, x3, y3);
    double area3 = calc_area(x1, y1, x2, y2, xp, yp);

    return (area == area1 + area2 + area3);
}