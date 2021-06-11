//////////////////////////////////////
/*Input:5
Enter Elements:
50
40
20
30
10
*Output:
elements of array are
   50   40   20   30   10
sorted data in asecending order
   10   20   30   40   50
sorted element in desecending order
   50   40   30   20   10
*Description:Sorting the elements in ascending and descending order
*Date:11-june-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
#define max 20
int main()
{
    int i,n,arr[max],j,temp;
    printf("how many no to enter in an array\n");
    scanf("%d",&n);
    printf("enter the elements of array......\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("\nsorted data in asecending order \n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n sorted element in desecending order\n");
    for(i=(n-1);i>=0;i--)
    {
        printf("%5d",arr[i]);
    }

}
