//////////////////////////////////////
/*Input: enter a no 15
*Output: factorial is 2004310016
*Description:Display the factorial of number
*Date: 30-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
#include <conio.h>
int main()
{
int n;
int fact=1;
int i=2;
printf("enter a no");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i ;
i++ ;
}
printf("factorial is %d",fact);
}
