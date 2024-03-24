#include <stdio.h>

int add(int fNum, int sNum);	// declaration of operation functions
int subtract(int fNum, int sNum);
int multiply(int fNum, int sNum);
int divide(int fNum, int sNum);
int operation(int oper, int fNum, int sNum);

int main(void)
{
	int fNum= 0;	// initialize 1st and 2nd input numbers
	int sNum= 0;
	int result = 0;	// result of operation
	int oper = 0;		// operation code
	
	printf("__| MALCULATOR 1.0 |__\n");	// user input, 1st number
	printf("|| Input 1st number: ");
	scanf("%d", &fNum);

	printf("|| Input 2nd number: ");	// user input, 2nd number
	scanf("%d", &sNum);

	printf("|| Choose operation:\n");	// user input, operation choice
	printf("|| 0 add\n|| 1 subtract\n|| 2 multiply\n|| 3 divide\n||=>");
	scanf("%d", &oper);
	
	result = operation(oper, fNum, sNum);	// calculate and print result
	
	if (oper == 3) {
		int remainder = 0;
		remainder = fNum % sNum;

		printf("|| Result: %d and %d/%d\n", result, remainder, sNum);
		printf("||____________________\n");
	}
	else if (oper != 3) {
		printf("|| Result: %d\n", result);
		printf("||____________________\n");
	}

	return 0;
}

/*
 * add, subtract, multiply and divide functions
 * they return the value of appropriate operation
 */
 
int add(int fNum, int sNum) 		// add
{	
	return fNum + sNum;
}
int subtract(int fNum, int sNum)		// subtract
{
	return fNum - sNum;
}

int multiply(int fNum, int sNum)		// multiply
{
	return fNum * sNum;
}

int divide(int fNum, int sNum) 		// divide
{	
	return fNum / sNum;
}

/*
 * operation function, chooses the proper operation
 * based on operation code
 */

int operation(int oper, int fNum, int sNum)
{
	if (oper == 0) {
		return add(fNum, sNum);
	}

	if (oper == 1) {
		return subtract(fNum, sNum);
	}

	if (oper == 2) {
		return multiply(fNum, sNum);
	}

	if (oper == 3, sNum != 0) {
		return divide(fNum, sNum);
	}

	if (oper == 3, sNum == 0) {
		printf("|| Dividing by zero is forbiden.\n");
		return 0;
	}

	else {
		printf("|| ERROR. No operation with index %d.\n"
				"|| Using 'add' as default.\n", oper);
		return add(fNum, sNum);
	}
}
