#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter a no");
scanf("%d",&n);
while(i<=n)
{
if(i%2==1)
{
printf("\n%d is odd number",i);
sum=sum+i;
}
i++;
}
printf("\nsum is %d",sum);
}
