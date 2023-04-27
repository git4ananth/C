#include <stdio.h>

void day_name(int num);

int main(){
    int num;
    //printf("Enter the number : ");
    scanf("%d", &num);
    if (num >= 1 && num<= 7){
        day_name(num);
    }
    else{
        printf("Invalid");
    }
}

void day_name(int num){
    static char arr[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 1; i <= 7; i++){
        if (i == num){
            printf("%s",arr[i-1]);
        }
    }
}