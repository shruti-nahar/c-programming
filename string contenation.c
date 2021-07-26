/////////////////////////////////////
/*Input: enter the string 1 shruti
         enter the string 2 nahar
*Output:final string is shrutinahar
*Description:Implementation of string concatenation without using inbuilt function
*Date: 26-July-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{
   int i=0,j=0;
   char s1[10],s2[20],s3[200];
   printf("enter the string 1 ");
   scanf("%s",&s1);
   printf("enter the string 2 ");
   scanf("%s",&s2);
   while(s1[i]!='\0')
   {
       s3[j]=s1[i];
       j++;
       i++;
   }
   i=0;
   while(s2[i]!='\0')
   {
       s3[j]=s2[i];
       i++;
       j++;
   }
   s3[j]='\0';
    printf("final string is %s",s3);
}
