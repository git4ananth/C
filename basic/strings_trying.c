#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "A";
    char str1[] = "B";
    int x = strcmp(str, str1);
    printf("%d", x);
}