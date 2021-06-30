//////////////////////////////////////
/*Input: enter a no 10
*Output: factor are 2
         factor are 5
*Description:Display the factors of number
*Date: 30-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int i,n;
printf("enter a no ");
scanf("%d",&n);
i=2;
while(i<=n/2)
{
if(n%i==0)
{
printf("\n factor are %d",i);
}
i++;
}
}
