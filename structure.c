/////////////////////////////////////
/*Input: enter the employee id 101
enter the salary 123000
enter the name shruti
enter the employee id 102
enter the salary 23000
enter the name shubham
enter the employee id 103
enter the salary 1000
enter the name prachi
*Output: 
----------------------------------DISPLAY DETAILS-----------------------------------------
         Id : 101
         Salary : 123000.0000
         Name : shruti
         Id : 102
         Salary : 23000.0000
         Name : shubham
         Id : 103
         Salary : 1000.00
         Name : prachi
*Description: Using Structure as array
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
struct Employee ei[3];
int i;
for(i=0;i<3;i++)
{
printf("enter the employee id ");
scanf("%d",&ei[i].id);
printf("enter the salary ");
scanf("%f",&ei[i].salary);
printf("enter the name ");
scanf("%s",&ei[i].name);
}
printf("\n----------------------------------DISPLAY DETAILS-----------------------------------------\n");
for(i=0;i<3;i++)
{
  printf("\n\t Id : %d",ei[i].id);
  printf("\n\t Salary : %f",ei[i].salary);
  printf("\n\t Name : %s",ei[i].name);
}
}
