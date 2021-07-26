/////////////////////////////////////
/*Input: enter the string 1 shruti
         enter the string 2 nahar
*Output:-
  lenght of s1 is 6
  s1>s2
  After copy of string 1 is shruti
  After copy of string 2 is shruti
  After concatenation is shrutishruti
*Description:Implementation of string handling function
*Date: 26-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{
int l;
char s1[20],s2[20];
printf("enter the string 1");
scanf("%s",&s1);
printf("enter the string 2");
scanf("%s",&s2);
l=strlen(s1);
printf("lenght of s1 is %d",l);
l=strcmp(s1,s2);
if(l==0)
{
    printf("\ns1=s2");

}
else if(l>0)
{
    printf("\ns1>s2");
}
else
{
    printf("\ns1<s2");
}
strcpy(s2,s1);
printf("\n After copy of string 1 is %s",s1);
printf("\n After copy of string 2 is %s",s2);
strcat(s1,s2);
printf("\nAfter catention is %s",s1);

}
