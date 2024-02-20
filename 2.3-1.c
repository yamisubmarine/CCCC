#include <stdio.h>

int main(){
    int integer1,integer2,integer3;
    printf("Please enter the first integer: ");
    scanf("%d",&integer1);
    printf("Please enter the second integer: ");
    scanf("%d",&integer2);
    printf("Please enter the third integer: ");
    scanf("%d",&integer3);
    int average = (integer1+integer2+integer3) / 3;
    printf("Average is %d.\n",average);
    return 0;
    }
