/*

3. Sum of digit more than 5.
i/p1: 123 o/p1: 0
i/p2: 246 o/p2: 6 

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

        if(temp>5)
        {
            sum=sum+temp;
        }

    }
    
    printf("sum is = %d\n",sum);
    
}




