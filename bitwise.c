/////////////////////////////////////
/*Input:--
*Output: 
          a&b=8
          a|b=9
          a<<2=32
          b>>3=1
          a^b=1
          x&y=4
          x|y=7
          x<<2=24
          y>>3=1
          x^y=3
*Description:Implementation of Bitwise Operator
*Date: 27-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
int main()
{
int a=8,b=9;
printf("a&b=%d\n",a&b);
printf("a|b=%d\n",a|b);
printf("a<<2=%d\n",a<<2);
printf("b>>3=%d\n",b>>3);
printf("a^b=%d\n",a^b);
int x=6,y=5;
printf("x&y=%d\n",x&y);
printf("x|y=%d\n",x|y);
printf("x<<2=%d\n",x<<2);
printf("y>>3=%d\n",y>>2);
printf("x^y=%d\n",x^y);
}
