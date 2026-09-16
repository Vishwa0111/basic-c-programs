/*
 
9. Count odd digit more than 3
and less than 8 .
i/p1: 963 o/p1: 1
i/p2: 2086 o/p2: 0

*/

#include<stdio.h>
void main()
{
    int num,c=0,temp;

    printf("Enter Number\n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp>3 && temp<8)
        {
            if(temp%2!=0)
            {
                c++;
            }
        }
    }

    printf("Count is = %d\n",c);
}
