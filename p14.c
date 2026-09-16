/*
 * 14. Print last 3 digit from last .
i/p1: 96412 o/p1: 2 1 4
i/p2: 56725 o/p2: 5 2 7
*/

#include<stdio.h>
void main() {

    int num,num1,temp;

    printf("Enter the number\n");
    scanf("%d",&num);

    num1=num%1000;

    for(num1;num1>0;num1=num1/10)
    {
        temp=num1%10;
        printf("%d ",temp);
    }

    printf("\n");
}


