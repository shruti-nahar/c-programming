//////////////////////////////////////
/*Input:5
*Output:Enter Elements:
10
20
30
40
50
sum is 150
avg is 30
greater than avg is 40
greater than avg is 50
*Description:Display the sum and avg of the array elements
*Date:11-june-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
#define max 20
int main ()
{
int arr[max],n,i,sum=0,avg;
printf("how  many no to store in array ");
scanf("%d",&n);
printf("enter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("\n sum is %d",sum);
avg=sum/n;
printf("\n avg is %d",avg);
for(i=0;i<n;i++)
{
if(arr[i]>avg)
{
printf("\n greater than avg is %d",arr[i]);
}
}
}
