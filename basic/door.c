// Using only operators and no if and while conditions
// find out the room number of your neighbour
//if yours is 9 theirs shoud be 0; and if yours is 10, then theirs should be 1

#include <stdio.h>

int main(){
    int doorno, neighbour ;
    char street[10], city[10];
    scanf("%d", &doorno);
    neighbour = (doorno + 1) % 10;
    
    printf("%d", neighbour);
    
}