/////////////////////////////////////
/*Input:--
*Output:
    A
    A    B
    A    B    C
    A    B    C    D
    A    B    C    D    E
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
ch++;
}
ch=65;
printf("\n");
}
}
