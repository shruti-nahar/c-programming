/////////////////////////////////////
/*Input:enter the acc no: 101
        enter a acc holder name: shruti
        enter the monthly balance: 10000
*Output:annual balance:120000.00
        tax :14400.00
        acc balance:105600.00

        ---------ACC BALANCE SHEET-----------
        ACC NO,         MONTHLY BALANCE,        ANNUAL BALANCE,         TAX,            ACC BALANCE
         101             10000                  120000.00               14400.00                105600.00
        ---------THANKYOU-----------
*Description:Display the Account Balance Sheet
*Date:23-June-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
int accno,monthlybalance;
float annualbalance,tax,accbalance;
char name[10];
printf("enter the acc no");
scanf("%d",&accno);
printf("enter a acc holder name");
scanf("%s",&name);
printf("enter the monthly balance");
scanf("%d",&monthlybalance);
annualbalance=monthlybalance*12;
printf("annual balance:%.2f \n",annualbalance);
tax=annualbalance*12/100;
printf("tax :%.2f \n",tax);
accbalance=annualbalance-tax;
printf("acc balance:%.2f \n",accbalance);
printf("\n\t---------ACC BALANCE SHEET-----------");
printf("\n\tACC NO,\t\tMONTHLY BALANCE,\tANNUAL BALANCE,\t\tTAX,\t\tACC BALANCE");
printf("\n\t %d \t\t %d \t\t\t%.2f \t\t%.2f \t\t%.2f",accno,monthlybalance,annualbalance,tax,accbalance);
printf("\n\t---------THANKYOU-----------");
}
