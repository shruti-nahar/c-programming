//////////////////////////////////////
*Input: 101,shruti,90%,85
*Output: 101,shruti,95%,85
*Description:if attendance>80 then increment per by 5
*Date: 30-may-2021
*Author: Shruti Nahar 
/////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
int rno;
char name[20];
int attd;
int per;
    printf("enter roll no");
    scanf("%d",&rno);
    printf("enter name of student ");
    scanf("%s",&name);
    printf("enter percentage");
    scanf("%d",&per);
    printf("enter attendance");
    scanf("%d",&attd);
    if(att>80)
    {
    per=per+5;
    }
    printf("roll is %d\n",rno);
    printf("name is %s\n",name);
    printf("attendance is %d\n",attd);
    printf("percentage is %d",per);
    return 0;
}
