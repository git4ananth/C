#include <stdio.h>
#include <stdlib.h>

void check_win(char ch, char arr[3][3]);
void print_game(char arr[3][3]);
void input_value(int rows, int cols, char ch, char arr[3][3]);

int main()
{
    char arr[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
    char ch;
    int count = 0;
    int r = 0;
    int c = 0;
    printf("Tic-tac-toe\n");
    print_game(arr);

    while (count < 9)
    {
        if (count % 2 != 0)
            ch = 'O';
        else
            ch = 'X';

        printf("Index to enter %c\n", ch);
        scanf("%d %d", &r, &c);
        input_value(r, c, ch, arr);
        print_game(arr);
        check_win(ch, arr);
        count++;
    }
    printf("DRAW");
}

void check_win(char ch, char arr[3][3])
{
    // check rows
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == ch && arr[i][1] == ch && arr[i][2] == ch) {
            printf("%c Wins!", ch);
            exit(1);
        }
    }
    // check columns
    for (int j = 0; j < 3; j++) {
        if (arr[0][j] == ch && arr[1][j] == ch && arr[2][j] == ch) {
            printf("%c Wins!", ch);
            exit(1);
        }
    }
    // check diagonals
    if (arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch) {
        printf("%c Wins!", ch);
        exit(1);
    }
    else if (arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch) {
        printf("%c Wins!", ch);
        exit(1);
    }
}

void print_game(char arr[3][3])
{
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2c\t", arr[i][j]);
        }
        printf("\n\n");
    }
}

void input_value(int rows, int cols, char ch, char arr[3][3])
{
    while (rows < 1 || rows > 3 || cols < 1 || cols > 3 || arr[rows - 1][cols - 1] != '-') {
        if (rows < 1 || rows > 3 || cols < 1 || cols > 3)
            printf("Invalid position. Enter again\n");
        else
            printf("Position already occupied. Enter again\n");
        scanf("%d %d", &rows, &cols);
    }
    arr[rows - 1][cols - 1] = ch;
}
