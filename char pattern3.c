/////////////////////////////////////
/*Input:--
*Output:
    A
    B    C
    D    E    F
    G    H    I    J
    K    L    M
    N    O
    P
*Description:Character Pattern
*Date:16-June-2021
*Author:Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int i,j,ch=65;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%5c",ch);
ch++;
}
printf("\n");
}
for(i=3;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%5c",ch);
ch++;
}
printf("\n");
}
}

