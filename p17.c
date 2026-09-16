 /*
17. Reverse odd digit in num .
i/p1: 963 o/p1: 39
i/p2: 27851 o/p2:157 
*/


#include<stdio.h>
void main()
{
    int i,num,j,rev=1,temp;
    printf("Enter the Number\n");
    scanf("%d",&num);

    for(i=0;num>0;num=num/10,i++);

    for(j=0;num>0;num=num/10,j++)
    {
        temp=num%10;
        if(temp/2!=0)
        {
            rev=temp;
            rev=rev*10;
        }

    }

    printf("%d\n",rev);
}
