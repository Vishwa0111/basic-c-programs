/*
10.Count even digit b/w 1 to 7
i/p1: 963 o/p1: 1
i/p2: 2686 o/2p: 3
*/

#include<stdio.h>
void main() {

    int num,temp,c=0;

    printf("Enter Number \n");
    scanf("%d",&num);


    for(num;num>0;num=num/10)
    {
        temp=num%10;
        if(temp>1 && temp<7 && temp%2==0)
        {
            c++;
        }
    }


    printf("Count is = %d\n",c);


}
