//////////////////////////////////////
/*Input:153
*Output:153 is Armstrong no
*Description:Check the Number is Armstrong or not
*Date:11-june-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
int main()
{
    int n,no,r,sum=0;
    printf("enter a no ");
    scanf("%d",&no);
    n=no;
    do
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    while(n!=0);
    if(no==sum)
    {
    printf("%d is a Armstrong no",no);
    }
    else
    {
    printf("%d is not a Armstrong no",no);
    }
}
