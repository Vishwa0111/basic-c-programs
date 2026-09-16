/*
7. Count odd digit in num.
i/p1: 123 o/p1: 2
i/p2: 2076 o/p2: 1
*/


#include<stdio.h>
void main()
{
    int num,temp,c=0;

    printf("Enter The Number\n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp%2!=0)
        {
            c++;
        }
    }

    printf("Odd number Count is = %d\n",c);

}


