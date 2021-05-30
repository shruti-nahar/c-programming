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
    scanf("%s",name);
    printf("enter percentage");
    scanf("%d",&per);
    printf("enter attendance");
    scanf("%d",&attd);
    if(attd>80)
    {
    per=per+5;
    }
    else
    {
    per=per-5;
    }
    printf("roll is %d\n",rno);
    printf("name is %s\n",name);
    printf("attendance is %d\n",attd);
    printf("percentage is %d",per);
}
