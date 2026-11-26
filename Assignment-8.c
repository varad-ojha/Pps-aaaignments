#include<stdio.h>

void numswap(int *n1, int *n2);
int main()
{
	int num1, num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	
	printf("BEFORE SWAP: First Number = %d Second Number = %d\n", num1,num2);
	numswap(&num1, &num2);
	printf("AFTER SWAP: First Number = %d Second Number = %d\n", num1,num2);
	
	return 0;
}

void numswap(int *num1, int *num2){
	
	int x;
	x=*num1;
	*num1=*num2;
	*num2=x;
	return;
}
