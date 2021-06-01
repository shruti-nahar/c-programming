////////////////////////////////////
*Input: 10
*Output: number divisible by 3&5 0
         number divisible by 3 3
         number divisible by 5 2
         number not divisible by n 3&5 5
*Description:Count the divisbilty of 3,5,&both from 1 to n 
*Date: 1-June-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<stdio.h>
int  main()
{
int n,i,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
printf("enter a no ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((i%3==0)&&(i%5==0))
{
cnt1++;
}
else if(i%3==0)
{
cnt2++;
}
else if(i%5==0)
{
cnt3++;
}
else
{
cnt4++;
}
}
printf("number divisible by 3&5 %d\n",cnt1);
printf("number divisible by 3 %d\n",cnt2);
printf("number divisible by 5 %d\n",cnt3);
printf("number not divisible by n 3&5 %d\n",cnt4);
}
