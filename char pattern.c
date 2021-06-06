#include<stdio.h>
int main()
{
int i,j,ch=65;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%5c",ch);
ch++;
}
printf("\n");
}
}
