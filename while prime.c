/////////////////////////////////////
/*Input:enter a no 13
*Output:13 is a prime no
*Description:Check the number is prime or not
*Date: 27-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
int main()
{
int i=2,no;
printf("enter a no ");
scanf("%d",&no);
while(i<=no/2)
{
if(no%i==0)
{
printf("%d is not a prime no",no);
break;
}
else
{
printf("%d is a prime no",no);
break;
}
i++;
}
getch();
}
