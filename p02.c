/* 
2. Sum of odd digit.
i/p1: 123 o/p1: 4
i/p2: 246 o/p2: 0
*/

#include<stdio.h>
int main()
{
    int num,i=0,temp,sum=0;

    printf("Enter Number\n");
    scanf("%d",&num);

    for(num;num>0;num=num/10)
    {
       temp=num%10;
       if (temp%2!=0)
       {
       sum=sum+temp;
       }
    }

    printf("Sum of Number is = %d\n",sum);
}

