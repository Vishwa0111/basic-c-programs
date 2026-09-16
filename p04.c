/*
Sum of digit less than 7.
i/p1: 123 o/p1: 6
i/p2: 276 o/p2: 8
*/

#include<stdio.h>
int main()
{
    int num,temp,sum=0;

    printf("Enter Number\n");
    scanf("%d",&num);
    
    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp<7)
        {
            sum=sum+temp;
        }
    }

    printf("Sum is = %d\n",sum);



}

