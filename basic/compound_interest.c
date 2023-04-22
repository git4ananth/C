#include <stdio.h>
#include <math.h>

int main(){
    double principal, amount, compound_interest;
    float rate;
    int time;
    /* char compounded_per_what[]; */

    printf("Enter the principal : ");
    scanf("%d", &principal);
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);
    printf("Enter the time in years : ");
    scanf("%d", &time);
    /* printf("Comopunded per what? (annum/quarter)"); */

    for (int i= 0; i <= time; i++){
        amount = principal * (1 + pow(rate*0.01, time));
        principal = amount;
    }

    printf("The resultant amount after %d years is : %d", time, amount);
}