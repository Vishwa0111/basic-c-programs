/*
 16. Reverse number .
i/p1: 963 o/p1: 369
i/p2: 2786 o/p2: 6872 
*/

#include<stdio.h>
void main() {

    int num,temp,temp1,rev=0;

    printf("Enter The Number\n");
    scanf("%d",&num);

    for(num;num>0;num=num/10)
    {

        temp=num%10;
        rev=rev*10+temp;
    }

    printf("Revers Number is = %d\n",rev);

}


