#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int n;
	printf("Enter any number");
	scanf("%d",&n);//-5
	if(n>0){
		printf("%d is +ve no",n);
	}
	else{
		printf("%d is -ve no",n);
	}
	return 0;
}
