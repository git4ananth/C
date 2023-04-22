#include <stdio.h>

// classift the amrks into grades using if, elseif, else statements
int main(){
    int marks = 70;

    if(marks>=90){
        printf("Distinction");
    }else if (marks < 90 && marks >= 80){
        printf("A Grade");
    }else if (marks < 80 && marks >= 65){
        printf("B Grade");
    }else if (marks < 65 && marks >= 50){
        printf("C Grade");
    }else{
        printf("Fail");
    }
}