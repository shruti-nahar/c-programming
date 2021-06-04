/////////////////////////////////////
/*Input: 10 20
*Output:addition is 30
*Description:Addition of two numbers without using arthimetic operator
*Date: 4-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
int main()
{
int num1,num2;
printf("Enter the num1 and num2 ");
scanf("%d %d",&num1,&num2);
for(int i=0;i<num2;i++)
{
num1++;
}
printf("addition is %d",num1);
}
