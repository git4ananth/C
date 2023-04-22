#include <stdio.h>

void num_half_pyramid(int rows);
void star_half_pyramid(int rows);
void num_half_pyramid_2(int rows);
void floyd(int rows);
void inverted_half_star_pyramid(int rows);
void inverted_half_num_pyramid(int rows);
void inverted_half_num_pyramid_2(int rows);
void star_right_triangle(int rows);

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    star_right_triangle(rows);
}

void star_half_pyramid(int rows) 
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void num_half_pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}

void num_half_pyramid_2(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%2d", i + 1);
        }
        printf("\n");
    }
}

void floyd(int rows)
{
    int k = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++){
            printf(" %d", k++);
        }
        printf("\n");
    }
}

void inverted_half_star_pyramid(int rows){
    for (int i = rows; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            printf(" *");
        }
        printf("\n");
    }
}

void inverted_half_num_pyramid(int rows){
    for (int i = rows; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            printf(" %d", j);
        }
        printf("\n");
    }
}

void inverted_half_num_pyramid_2(int rows){
    for (int i = rows; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            printf(" %d", i);
        }
        printf("\n");
    }
}

void star_right_triangle(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}