/////////////////////////////////////
*Input: 1 2 3 4 5 
*Output: 5 4 3 2 1
*Description:Display numbers in reverse order:-by using array 
*Date: 1-June-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<stdio.h>
int main()
//Array gives continuous block of memory
{
    int arr[5];
    int i;
    printf("enter the five elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of array are\n");
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\nelements of array in reverse order\n");
    for(i=4;i>=0;i--)
    {
        printf("%5d",arr[i]);
    }

}
