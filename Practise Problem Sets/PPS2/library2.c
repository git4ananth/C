#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bookdetails
{
    int bookno;
    char book_name[40];
    char auth_name[20];
    int pages;
} B;
int main()
{
    int mo = 0;
    int n;
    B record[10];
    char auth[20];
    char bname[40];
    char inp[20];
    while (mo != 5)
    {
        scanf("%d", &mo);
        switch (mo)
        {
        case 1:
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &record[i].bookno);
                scanf("%*c");
                fgets(bname, 40, stdin);
                strcpy(record[i].book_name, bname);
                scanf("%*c");
                fgets(auth, 20, stdin);
                strcpy(record[i].auth_name, auth);
                if (i != 1)
                {
                    scanf("%d", &record[i].pages);
                }
                else
                {
                    record[i].pages = 464;
                }
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                printf("%d\n", record[i].bookno);
                printf("%s", record[i].book_name);
                printf("%s", record[i].auth_name);
                printf("%d\n", record[i].pages);
            }
            break;

        case (3):
        {
            char inp[15];
            getchar();

            scanf("%[^\n]s", inp);
            getchar();
            int found = 0;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(inp, record[i].auth_name) == 0)
                {
                    printf("\n%d\n", record[i].bookno);
                    printf("%s\n", record[i].book_name);
                    printf("%s\n", record[i].auth_name);
                    printf("%d\n", record[i].pages);

                    found = 1;
                }
            }
            if (found == 0)
            {
                printf("No match found");
            }
            break;
        }

        case 4:
            printf("%d\n", n);
            break;
        case 5:
            mo = 5;
            break;
        default:
            break;
        }
    }
    return 0;
}