/////////////////////////////////////
/*Input: 15
*Output: factor are 3
         factor are 5
*Description:factor
*Date: 23-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int i,n;
printf("enter a no ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("\n factor are %d",i);
}
}
}
