#include<stdio.h>
#include<math.h>

int solve(float a, float b, float c);

int main()
{
    int a, b, c;
    printf("Enter _x^2 + _x + _ = 0 : ");
    scanf("%d", &a);
    printf("Enter %dx^2 + _x + _ = 0 : ", a);
    scanf("%d", &b);
    printf("Enter %dx^2 + %dx + _ = 0 : ", a, b);
    scanf("%d", &c);
    printf("Proceeding with equation : %dx^2 + %dx + %d = 0", a, b, c);
    solve(a,b,c);
}

int solve(float a, float b, float c)
{
    double D;
    D = sqrt(b*b - 4*a*c);
    if(D>0)
    {
        printf("\nretVal : Sol RealRoots");
    }
    else if(D=0)
    {
        printf("\nretVal : Sol RepeatedRoots");
    }
    else if(D<0)
    {
        printf("\nretVal : Sol ComplexRoots");
    }
    else if(a==0 && b!=0 && c!=0)
    {
        printf("\nretVal : Sol Linear");
    }
    else if(a==0 && b==0 && c!=0)
    {
        printf("\nretVal : Sol Inconsistent");
    }
    else if(a==0 && b==0 && c==0)
    {
        printf("\nretVal : Sol Infinite");
    }
}

