#include<stdio.h>

int factorial(int number) {
	int fact=1;
	for (fact=1;number>0;number--){
		fact *=number;
	}
}
int main () {
	int n;
	printf("Please enter the number you want the factorial: ");
	scanf("%d",&n);
	printf("Factorial of the number you entered: %d",factorial(n));
	return 0;
}
