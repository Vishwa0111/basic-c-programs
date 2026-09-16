/*
5. Sum of digit in b/w 3 to 8 .
i/p1: 123 o/p1: 3
i/p2: 276 o/p2: 13
*/


#include<stdio.h>
int main()
{
    int num,sum=0,temp;


    printf("Enter a Number\n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp >=3 && temp<=8)
        {
            sum=sum+temp;
        }
    }


    printf("sum is = %d\n",sum);


}

