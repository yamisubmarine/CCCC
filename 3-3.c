#include <stdio.h>
int main(){
    int integer,sum;
    printf("Please enter the first integer: ");
    scanf("%d",&integer);
    sum = integer;
    printf("Please enter the second integer: ");
    scanf("%d",&integer);
    sum = integer+sum;
    printf("Please enter the third integer: ");
    scanf("%d",&integer);
    sum = integer+sum;
    printf("Sum is %d.\n",sum);
    return 0;
}
