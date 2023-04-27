#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void reorder(int n, char *x[])
{
    int i;
    int j;
    char temp[30];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (strcmp(x[j],x[j+1])>0)
            {
                strcpy(temp,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],temp);
            }
        }
    }

}
int main()
{
    int flag=0;
    char **lptr=NULL;
    lptr=(char **)malloc(1*sizeof(char *));
    char country[100];
    int count=1;
    char ch[3];
    int i;
    while(1)
    {
        lptr=(char **)realloc(lptr,count*sizeof(char *));
        //printf("Enter the country name or type END to exit");
        scanf("\n");
        scanf("%[^\n]s",country);
        for (i=0;i<strlen(country);i++)
        {
            if (isdigit(country[i]))
            {
                flag=1;
                break;
            }
        }
        if (strcmp("END",country)==0)
        {
            count--;
            break;
        }
        else
        {
            lptr[count-1]=(char *)malloc(strlen(country)*sizeof(char));
            strcpy(lptr[count-1],country);
            count=count+1;
        }
    }
    reorder(count,lptr);

    if (flag==1)
    {
        printf("Invalid");
    }
    else
    {
        for (i=0;i<count;i++)
        {
            printf("%s\n",lptr[i]);
        }

    }
    return 0;
}