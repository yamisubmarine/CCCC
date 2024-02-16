#include <stdio.h>
int main(){
    int integer1,integer2,integer3,sum;
    printf("Please enter the first integer: ");
    scanf("%d",&integer1);
    printf("Please enter the second integer: ");
    scanf("%d",&integer2);
    printf("Please enter the third integer: ");
    scanf("%d",&integer3);
    sum = integer1+integer2+integer3;
    printf("Sum is %d.\n",sum);
    return 0;
    }
