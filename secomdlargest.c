//////////////////////////////////////
/*Input: Enter 3 numbers:
10
20
30
*Output: 20 is the 2nd largest number
*Description:Find the second largest number
*Date: 24-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b &c);
   if(a>=b && a>=c)
    {
        if(b >= c)
        {
            printf("%d is the 2nd largest number\n", b);
        }
        else
        {
            printf("%d is the 2nd largest number\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("%d is the 2nd largest number\n",a);
        }
        else
        {
            printf("%d is the 2nd largest number\n",c);
        }
    }

    else if(c >= b && c>=a)
    {
        if(a>=b)
        {
        printf("%d is the 2nd largest number\n", a);
        }
       else
       {
        printf("%d is the 2nd largest number\n", b);
       }
    }
    return 0;
}
