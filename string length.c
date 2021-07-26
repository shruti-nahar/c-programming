/////////////////////////////////////
/*Input: enter the string  shruti
*Output:lenght of string is 6
*Description:Implementation of string finding length without using inbuilt function
*Date: 26-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int l=0;
char s[20];
printf("enter the string ");
scanf("%s",&s);
while(s[l]!='\0')
{
l++;
}
printf("lenght of string is %d",l);
}
