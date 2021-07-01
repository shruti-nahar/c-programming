////////////////////////
/*Input:enter the elements of array
1
2
3
4
5
6
7
8
9
*Output:
sum of upperbound  is 11
sum of diagonal is 15
sum of lower bound is 19
*Description:Display the addition of upper bound, lower bound and diagonal of matrix
*Date:1-July-2021
*Author name: Shruti Nahar*/
#include<stdio.h>

int main()
{
int arr[3][3],i,j,sum=0;
printf("enter the elements of array");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
sum=sum+arr[i][j];
}
}
printf("sum of upperbound  is %d\n",sum);
sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    if(i==j)
    {
sum=sum+arr[i][j];
    }
}
}
printf("sum of diagonal is %d\n",sum);
sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<i;j++)
{
sum=sum+arr[i][j];
}
}
printf("sum of lower bound is %d",sum);
}
