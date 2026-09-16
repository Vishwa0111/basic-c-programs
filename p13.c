/*
13. Sum of last 3 odd digit .
i/p1: 96312 o/p1: 13
i/p2: 57235 o/p2: 15
*/


#include<stdio.h>
void main() {

    int num,c=0,sum=0,temp;

    printf("Enter Number \n");
    scanf("%d",&num);

    while(c<3 && num>0)
    {
        {
        temp=num%10;
        if(temp%2!=0)
        {
            sum=sum+temp;
            c++;
        }
        num=num/10;
    }
    }
    if(c<3)
        printf("Num of odd digits not equal to 3\n");
    else 
         printf("Sum is = %d\n",sum);
}
