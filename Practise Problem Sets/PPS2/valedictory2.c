#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n, max = 0, max_emp_no;
char max_name[50], name[50];

struct valedictory
{
    int emp_no;
    char name[50];
    char salary[10];
    int sal;
};

int main()
{
    scanf("%d", &n);

    struct valedictory val[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &val[i].emp_no);

        scanf("%s", val[i].name);

        scanf("%s", val[i].salary);
        val[i].sal = 0;
        for (int j = 0; val[i].salary[j] != '\0'; j++)
        {
            if (val[i].salary[j] == '.')
            {
                printf("INVALID");
                exit(1);
            }
            else
            {
                int num = val[i].salary[j] - 48;
                val[i].sal = val[i].sal * 10 + num;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (val[i].sal > max)
        {
            max = (int)val[i].sal;
            max_emp_no = val[i].emp_no;
            strcpy(max_name, val[i].name);
        }
        else if (max == val[i].sal)
        {
            printf("Cannot Determine");
            exit(1);
        }
    }

    printf("%d\n%s\n%d", max_emp_no, max_name, max);

    return 0;
}
