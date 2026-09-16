/*
 12. Sum of last 3 digit .
i/p1: 9631 o/p1: 10
i/p2: 2786 o/p2: 21 
*/


#include<stdio.h>
void main() {

    int num,num1,temp,sum=0;

    printf("Enter Number \n");
    scanf("%d",&num);

    num1=num%1000;

    for(num1;num1>0;num1=num1/10)
    {
        temp=num1%10;
        sum=sum+temp;
    }

    printf("sum of last 3 digit is = %d\n",sum);




}


