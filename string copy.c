/////////////////////////////////////
/*Input: enter the string 1 shruti
         enter the string 2 nahar
*Output:string 2 is shruti
*Description:Implementation of string copy without using inbuilt function
*Date: 26-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
int i=0;
printf("enter the string 1 ");
scanf("%s",s1);
printf("enter the string 2 ");
scanf("%s",s2);
while(s1[i]!='\0')
{
s2[i]=s1[i];
i++;
}
printf("string 2 is %s",s2);
}
