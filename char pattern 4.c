/////////////////////////////////////
/*Input:--
*Output:
    A
    B    B
    C    C    C
    D    D    D    D
    E    E    E    E    E
    D    D    D    D
    C    C    C
    B    B
    A
*Description:Character Pattern
*Date:16-June-2021
*Author:Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int i,j,ch=65;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%5c",ch);
}
ch++;
printf("\n");
}
ch=68;
for(i=4;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%5c",ch);
}
ch--;
printf("\n");
}
}
