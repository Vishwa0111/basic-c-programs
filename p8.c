/*

8.Count even digit more than 4
i/p1: 123 o/p1: 0
i/p2: 2076 o/p2: 1

*/


#include<stdio.h>
void main()
{
    int num,c=0,temp;

    printf("Enter the number\n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp>4 && temp%2==0)
        {
            c++;
        }
    }
    printf("Count is = %d\n",c);
}
