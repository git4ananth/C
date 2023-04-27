#include <stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int att=0;
int size=0;
int t=0;

ptr=(int*)malloc(sizeof(20));
while(att!=2)
{
    int input;
    scanf("%d",&input);
    if(input==-1||input==1)
    {
        att+=1;
        if(att==1)
        {
            printf("Invalid input, enter details again\n");
        }
        else if(att==2)
        {
            printf("Invalid, number of elements must be more than 1\n");
            printf("You have given invalid input 2 times and more, you cannot continue. Thanks.\n");
        }
    }else{
        for(int i=0;i<input;i++)
        {
            scanf("%d",(ptr+i));
            size=size+1;
        }
       
        t=size;
        att=0;
        break;
    }
    
}
while(att!=2)
{
    int input;
    scanf("%d",&input);
    if(input==-1||input==1)
    {
        att+=1;
        if(att==1)
        {
            printf("Invalid input, enter details again\n");
        }
        else if(att==2)
        {
            printf("Invalid, number of elements must be more than 1\n");
            printf("You have given invalid input 2 times and more, you cannot continue. Thanks.\n");
        }
    }else{
        for(int i=t;i<input+t;i++)
        {
            scanf("%d",(ptr+i));
            size=size+1;
        }
        break;
    }
    
}
for(int i=0;i<size;i++)
{
    printf("%d ",*(ptr+i));
}
printf("\n");
for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

for(int i=0;i<size;i++)
{
    printf("%d ",*(ptr+i));
}
}