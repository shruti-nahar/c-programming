//////////////////////////////
/*Input:Enter the amount: 35
*Output:please press no in which you want to convert amount
1-Indian Rupee
2-US Dollar
3-Pound
4-euro
2
-----------------CURRENCY CONVERTER IN RS------------------
                35.00 rs = 0.50 dollars
 Do you want to continue!!!!!!!!!!!! 1
please press no in which you want to convert amount
1-Indian Rupee
2-US Dollar
3-Pound
4-euro
3
-----------------CURRENCY CONVERTER IN EURO------------------
                35.00 rs = 0.41 euro
 Do you want to continue!!!!!!!!!!!! 1
please press no in which you want to convert amount
1-Indian Rupee
2-US Dollar
3-Pound
4-euro

4
-----------------CURRENCY CONVERTER IN POUNDS------------------
                35.00 rs = 0.37 pounds
 Do you want to continue!!!!!!!!!!!! 2
 *************************THANKYOU******************
*Description:- Currency convertor
*Date:22-July-2021
*Author:Shruti Nahar*/
///////////////////////////////
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	int ch1,ch2,ch;
	float rs,dollar,euro,pound;
	printf("Enter the amount ");
	scanf("%f",&rs);
	do
    {
	printf("please press no in which you want to convert amount");
	printf("\n1-Indian Rupee\n2-US Dollar\n3-Pound\n4-euro");
	scanf("%d",&ch2);	
	switch(ch2)
	{
	case 1:
			printf("Same amount..");
		break;
	case 2:
		printf("\n-----------------CURRENCY CONVERTER IN RS------------------\n");
		dollar=rs/70;
		printf("\t\t%.2f rs = %.2f dollars\n",rs,dollar);
	break;
	case 3:
		printf("\n-----------------CURRENCY CONVERTER IN EURO------------------\n");
		euro=rs/86.07;
		printf("\t\t%.2f rs = %.2f euro\n",rs,euro);
	break;
	case 4:
		printf("\n-----------------CURRENCY CONVERTER IN POUNDS------------------\n");
		pound=rs/94.65;
		printf("\t\t%.2f rs = %.2f pounds\n",rs,pound);
	break;
	default:
		printf("invalid currency");
	}
	printf("\n Do you want to continue!!!!!!!!!!!! ");
	scanf("%d",&ch);
    }while(ch==1);
return 0;
}

