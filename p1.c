1. Sum of digit.
i/p1: 123 o/p1: 6
i/p2: 246 o/p2: 12 1. Sum of digit.
i/p1: 123 o/p1: 6
i/p2: 246 o/p2: 12 /*

1. Sum of digit.
i/p1: 123 o/p1: 6
i/p2: 246 o/p2: 12

*/

#include<stdio.h>
int main()
{
    int num,i,j,k,sum;
    printf("Enter 3 Digit Number\n");
    scanf("%d",&num);

    i=num%10;
    num=num/10;
    j=num%10;
    num=num/10;
    k=num%10;
    
    sum=i+j+k;

    printf("Sum of given number is = %d\n",sum);
}


