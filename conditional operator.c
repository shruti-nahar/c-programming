#include<stdio.h>
#include<conio.h>
int main()
{
int a=10,b=20,c=30,ans;
ans=(a>b)?(a>c?a:c):(b>c?b:c) ;
printf("ans is %d",ans);
}
