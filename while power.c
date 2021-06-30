//////////////////////////////////////
/*Input: enter a base and power 2 3
*Output: ans is 8
*Description:Display the power of number
*Date: 30-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
int main()
{
int i=1,b,p,ans=1;
printf("enter a base and power ");
scanf("%d %d",&b,&p);
while(i<=p)
{
ans=ans*b;
i++;
}
printf("ans is %d",ans);
}
