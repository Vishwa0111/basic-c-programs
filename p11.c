/*
 11. Sum of even digit .
i/p1: 963 o/p1: 6
i/p2: 2786 o/p2: 16 
*/

#include<stdio.h>
void main() {


    int num,temp,sum=0;


    printf("Enter number \n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp%2==0)
        {
            sum=sum+temp;
        }

    }


    printf("Sum of even digit is = %d\n",sum);

}


