//////////////////////////////////////
/*Input:enter a no 8
*Output:1 is not divisible by 3 & 5
        2 is not divisible by 3 & 5
        3 is divisible by 3
        4 is not divisible by 3 & 5
        5 is divisible by 5
        6 is divisible by 3
        7 is not divisible by 3 & 5
        8 is not divisible by 3 & 5
*Description:Display the divisiblity of number 
*Date: 30-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int n,i=1;
printf("enter a no ");
scanf("%d",&n);
while(i<=n)
{
if(i%3==0)
{
printf("\n%d is divisible by 3",i);
}
else if(i%5==0)
{
printf("\n%d is divisible by 5",i);
}
else if(i%3==0 && n%5==0)
{
printf("\n%d is divisble by 3 & 5",i);
}
else
{
printf("\n%d is not divisible by 3 & 5",i);
}
i++;
}
}

