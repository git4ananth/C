#include <stdio.h>

int main(){
    char line[150];
    int vowels, consonants, digit, space;
    
    // initialie all variables to 0
    vowels = consonants = digit = space = 0;

    // gets full line of string input
    printf("Enter a line of string :");
    gets(line);

    //loop through each character of the string
    for (int i = 0; line[i] != "\0"; i++){
        //convert character to lowercase
        line[i] = tolower()
    }
}