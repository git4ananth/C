#include <stdio.h>

#include <string.h>

int main()
{

    char src[50], dest[50];
    char ch;
    getchar();
    scanf("%[^\n]s", src);
    getchar();
    scanf("%c", &ch);
    getchar();

    int cnt = 0;

    for (int i = 0; *(src + i) != '\0'; i++)
    {

        if (*(src + i) != ch)
        {

            *(dest + cnt) = *(src + i);

            cnt++;
        }
    }

    if (strchr(src, ch) == NULL)
    {

        printf("No match");
    }

    else
    {

        printf("%s", dest);
    }

    return 0;
}