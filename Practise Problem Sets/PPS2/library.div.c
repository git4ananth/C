// P2Q3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int book_no;
    char book_name[50];
    char author_name[50];
    int pages;
};

int main()
{
    int choice, i, n, count=0;
    char author[50];
    struct book books[50];
    
    while(1)
    {
        printf("\nMENU\n");
        printf("PRESS 1. TO ADD BOOK DETAILS.\n");
        printf("PRESS 2. TO DISPLAY BOOK DETAILS.\n");
        printf("PRESS 3. TO DISPLAY BOOKS OF A GIVEN AUTHOR.\n");
        printf("PRESS 4. TO COUNT THE NUMBER OF BOOKS.\n");
        printf("PRESS 5. TO EXIT.\n\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("\nHow Many Records You Want to Add: ");
                scanf("%d", &n);
                
                for(i=0; i<n; i++)
                {
                    printf("\nAdd Details of Book %d:\n", i+1);
                    printf("Enter Book No.: ");
                    scanf("%d", &books[i].book_no);
                    printf("Enter Book Name: ");
                    scanf("%s", books[i].book_name);
                    printf("Enter Author Name: ");
                    scanf("%s", books[i].author_name);
                    printf("Enter No. of Pages: ");
                    scanf("%d", &books[i].pages);
                }
                
                break;
            
            case 2:
                printf("\nDetails of All Books:\n");
                for(i=0; i<n; i++)
                {
                    printf("\nBook No. %d\n", books[i].book_no);
                    printf("Book Name: %s\n", books[i].book_name);
                    printf("Author Name: %s\n", books[i].author_name);
                    printf("No. of Pages: %d\n", books[i].pages);
                }
                
                break;
                
            case 3:
                printf("\nEnter Author Name: ");
                scanf("%s", author);
                
                printf("\nBooks of Author %s:\n", author);
                for(i=0; i<n; i++)
                {
                    if(strcmp(books[i].author_name, author)==0)
                    {
                        printf("\nBook No. %d\n", books[i].book_no);
                        printf("Book Name: %s\n", books[i].book_name);
                        printf("No. of Pages: %d\n", books[i].pages);
                    }
                }
                
                break;
                
            case 4:
                for(i=0; i<n; i++)
                {
                    count++;
                }
                printf("\nTotal Number of Books: %d\n", count);
                
                break;
                
            case 5:
                printf("\nExiting...");
                return 0;
                
            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }
    }
    
    return 0;
}