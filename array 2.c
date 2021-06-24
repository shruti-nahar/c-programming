/////////////////////////////////////
/*Input: how many no do you want in array 5
        enter 5 elements of array
        10
        2
        3
       45
        6
*Output: 
elements of array are
   10    2    3   45    6
 even no is 10
 even no is 2
 odd no is 3
 odd no is 45
 even no is 6
 total count of even is 3
 total count of odd is 2
*Description:Count the total number of Even / Odd and display the Even & Odd number
*Date: 24-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
#define max 20 //constant
int main()
{
    int arr[max],i,n;
    int even=0,odd=0;
    printf("how many no do you want in array");
    scanf("%d",&n);
    printf("enter %d elements of array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%5d",&arr[i]);
    }
    printf("elements of array are\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\n even no is %d",arr[i]);
            even++;
        }
        else
        {
            printf("\n odd no is %d",arr[i]);
            odd++;
        }
    }
    printf("\n total count of even is %d",even);
    printf("\n total count of odd is %d",odd);
}
