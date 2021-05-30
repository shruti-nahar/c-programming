//////////////////////////////////////
*Input: C
*Output: Its captial Vowel..
*Description:Check if character is vowel or not and if yes then is it Captial or Small Vowel 
*Date: 30-may-2021
*Author: Shruti Nahar 
/////////////////////////////////////////#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch;
	printf("enter any character");
	scanf("%c",&ch);//i
	if((ch>=65)&&(ch<=90))//check for capital character
	{
		//check for the capital vowel..
		if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		{
			printf("Its capital vowel..");
		}
		else{
			printf("Its capital character");
		}
	}
	else if((ch>='90')&&(ch<=122)){
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
			printf("\nIt small vowel.");
		}
		else
		{
			printf("\nits small character");
		}
	}
	else if((ch>=48)&&(ch<=57)){
		printf("\nits no");
	}
	else{
		printf("other character");
	}
	return 0;
}
