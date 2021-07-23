/////////////////////////////////////
/*Input: 10
*Output:
        0     1    1    2    3    5    8   13   21   34
*Description:Fibonacci series
*Date: 23-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int first,second,next,n,i=1;
printf("enter a no");
scanf("%d",&n);
first=0;
second=1;
printf("%5d %5d",first,second);
while(i<=(n-2))
{
next=first+second;
first=second;
second=next;
i++;
printf("%5d",next);
}
}
