//////////////////////////////////
/*Input:enter the elements of matrix
10
20
30
40
50
60
70
80
90
*Output:
elements of matrix are
   10   20   30
   40   50   60
   70   80   90

 symmetric Matrix
*Description:Check for the symmteric matrix
*Date:2-July-2021
*Author:Shruti Nahar*/
#include<stdio.h>
int symteric(void);
int main()
{
    int arr[3][3],i,j,flag=0;
    printf("enter the elements of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements of matrix are \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
flag=symetric();
 if(flag==0)
    {
         printf("\n symmetric Matrix");

    }
    else
    {
         printf("\n Asymmetric Matrix");
    }
}

int symetric()
{
    int i,j,arr[3][3];
     for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                return 0;

            }

        }
    }
}
