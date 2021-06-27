/////////////////////////////////////
/*Input:enter a no 12 
*Output: 
        12      *       1       =       12
        12      *       2       =       24
        12      *       3       =       36
        12      *       4       =       48
        12      *       5       =       60
        12      *       6       =       72
        12      *       7       =       84
        12      *       8       =       96
        12      *       9       =       108
        12      *       10      =       120
*Description:Display the table of any no.
*Date: 27-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
int main()
{
int i,n,ans;
i=1;
printf("enter a no");
scanf("%d",&n);
while(i<=10)
{
ans=n*i;
printf("\n\t%d\t*\t%d\t=\t%d",n,i,ans);
i++;
}
}
