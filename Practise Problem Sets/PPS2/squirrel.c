#include <stdio.h>
int main()
{
    int n, m, k;
    // printf("Enter the number of squirrels waiting: ");
    scanf("%d", &n);
    // printf("Enter the number of chestnut trees: ");
    scanf("%d", &m);
    // printf("Enter the number of chestnuts needed: ");
    scanf("%d", &k);
    int Ti[m], Pi[m], i, j;
    for (i = 0; i < m; i++)
    {
        // printf("%d", i+1); scanf("%d", &Ti[i]);
        // printf("%d", i+1); scanf("%d", &Pi[i]);}
        int chestnuts[m];
        for (i = 0; i < m; i++)
        {
            chestnuts[i] = 0;
            for (j = Ti[i]; chestnuts[i] < k; j += Pi[i])
            {
                chestnuts[i]++;
            }
        }
        int shortest_time = chestnuts[0];
        for (i = 1; i < m; i++)
        {
            if (chestnuts[i] < shortest_time)
            {
                shortest_time = chestnuts[i];
            }
        }
        printf("%d\n", shortest_time);
        return 0;
    }
}