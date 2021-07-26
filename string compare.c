/////////////////////////////////////
/*Input: enter the string 1 shruti
         enter the string 2 shruti
*Output:s1=s2
*Description:Implementation of string comparison without using inbuilt function
*Date: 26-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{
int i=0;
char s1[10],s2[10];
printf("enter the string 1 ");
scanf("%s",s1);
printf("enter the string 2 ");
scanf("%s",s2);
while(s1[i]==s2[i]&& s1[i]!='\0')
{
    i++;
}
if(s1[i]>s2[i])
{
printf("s1>s2");
}
else if(s2[i]>s1[i])
{
printf("s1<s2");
}
else
{
printf("s1=s2");
}
}
