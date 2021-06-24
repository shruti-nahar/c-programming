//////////////////////////////////////
/*Input: 
enter the no of rows and col 3
                             3
enter the elements of 2 D-array 1
10
20
30
40
50
60
70
80
90
enter the no of rows and col 3
                             3
enter the elements of 2 D-array 2
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
the elements of 2 D-array 1 are
   10   20   30
   40   50   60
   70   80   90
the elements of 2 D-array 2 are
    1    2    3
    4    5    6
    7    8    9

---------------------Addition------------------------
   11   22   33
   44   55   66
   77   88   99
*Description:Addition of 2D Matrix
*Date: 24-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
int main()
{
int arr1[3][3],arr2[3][3],arr3[3][3],i,j,r1,r2,c1,c2;
printf("enter the no of rows and col");
scanf("%d %d",&r1,&c1);
printf("enter the elements of 2 D-array 1\n");
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
printf("the elements of 2 D-array 1 are\n");
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%5d",arr1[i][j]);
        }
        printf("\n");
    }
printf("enter the no of rows and col");
scanf("%d %d",&r2,&c2);
printf("enter the elements of 2 D-array 2\n");
for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
printf("the elements of 2 D-array 2 are\n");
for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%5d",arr2[i][j]);
        }
        printf("\n");
    }
    if((r1==r2)&&(c1==c2))
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
          arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\n---------------------Addition------------------------\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%5d",arr3[i][j]);
        }
        printf("\n");
    }


    }

}
