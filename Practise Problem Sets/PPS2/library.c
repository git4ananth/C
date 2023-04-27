#include <stdio.h>

struct Book
{
    int serial_number;
    char book_name[50];
    char author[20];
    int number_of_pages;
};

struct Book books[10];
int count = 0;

void menu();
void add_book();
void list_of_books();
void count_books();

int main()
{
    int choice;
    printf("Enter a choice : ");

    while (choice != 4)
    {
        menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_book();
            break;

        case 2:
            list_of_books();
            break;

        case 3:
            count_books();
            break;

        case 4:
            printf("Exiting...\n");
            break;
        }
    }
}

void menu()
{

    printf("PRESS 1.TO ADD BOOK DETAILS.\n");
    printf("PRESS 2.TO DISPLAY BOOK DETAILS.\n");
    printf("PRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.\n");
    printf("PRESS 4.TO COUNT NUMBER OF BOOKS.\n");
    printf("PRESS 5.TO EXIT.\n");
}

void add_book()
{
    int serial;
    char name[50];
    char author[20];
    int pages;

    printf("\nEnter the serial number : ");
    scanf("%d", &serial);
    printf("Enter the name of the book : ");
    fgets(name, 50, stdin);
    printf("Enter the author name : ");
    fgets(author, 20, stdin);
    printf("Enter the number of pages : ");
    scanf("%d", &pages);

    struct Book b1 = {serial, *name, *author, pages};
    books[count] = b1;
    count++;
}

void list_of_books()
{
    char author[20];
    printf("\nEnter the Author to get all their books : ");
    scanf("%s", author);
    if (count > 0)
    {
        for (int i = 0; i < count; i++)
        {
            if (books[i].author == author)
            {
                printf("%s", books[i].book_name);
            }
        }
    }
    else
    {
        printf("No books yet.");
        printf("Please add the books first.");
    }
}

void count_books()
{
    printf("Number of books : %d", count);
}