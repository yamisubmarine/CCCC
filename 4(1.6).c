#include <stdio.h>
int main(){
    int integer1,integer2;
    printf("Please enter the fitst integer: ");
    scanf("%d",&integer1); //integer1: 3
    printf("Please enter the second integer: ");
    scanf("%d",&integer2); //integer2: 5

    int temp = integer1; //temp = 3,integer1 = 3,integer2 = 5
    integer1 = integer2; //temp = 3,integer1 = 5,integer2 = 5
    integer2 = temp;     //temp = 3,integer1 = 5,integer2 = 3

    printf("intrger1: %d\n",integer1); //integer1 = 5
    printf("integer2: %d\n",integer2); //integer2 = 3
    return 0;
    }
