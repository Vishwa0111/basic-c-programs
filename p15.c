/*
 15. Print 1st digit .
i/p1: 9642 o/p1: 9
i/p2: 56725 o/p2: 5
*/

#include<stdio.h>
void main() {

    int num,num1,i=1,c=0;


    printf("Enter the NUmber\n");
    scanf("%d",&num);

    for(num1=num;num1>0;num1=num1/10,c++);

    for(c=c-1;c>0;c--,i=i*10);

    printf("1st Digit of Num is = %d\n",num/i);
}

