/////////////////////////////////////
/*Input: enter the employee id 101
         enter the salary 23000
         enter the name shruti
*Output: 
----------------------------------DISPLAY DETAILS-----------------------------------------
         Id : 101
         Salary : 23000.000000
         Name : shruti
*Description: passing structure as argument in function
*Date: 1-August-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
#include<string.h>
struct Employee
{
int id;
float salary;
char name[30]
};
int main()
{
struct Employee ei;
printf("enter the employee id ");
scanf("%d",&ei.id);
printf("enter the salary ");
scanf("%f",&ei.salary);
printf("enter the name ");
scanf("%s",&ei.name);
printf("\n----------------------------------DISPLAY DETAILS-----------------------------------------\n");
display(ei);
}
void display(struct Employee ei)
{
  printf("\n\t Id : %d",ei.id);
  printf("\n\t Salary : %f",ei.salary);
  printf("\n\t Name : %s",ei.name);
}


