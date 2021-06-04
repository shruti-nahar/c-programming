/////////////////////////////////////
/*Input: shrutishubham
*Output:
a character has 1 count
b character has 1 count
h character has 3 count
i character has 1 count
m character has 1 count
r character has 1 count
s character has 2 count
t character has 1 count
u character has 2 count
*Description:Find the Occurence of each character
*Date: 4-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
 #include<stdio.h>
#include<string.h>
int main()
{
char str[300];
printf("Enter the string");
scanf("%s",str);
int count[256]={0};
int i,len;
len=strlen(str);
for(i=0;i<len;i++)
{
      count[(int)(str[i])]++;
}
for(i=0;i<256;i++)
{
    if(count[i]!=0)
    {
        printf("%c character has %d count\n",i,count[i]);
    }
}
}
