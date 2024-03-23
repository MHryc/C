#include <stdio.h>

float add(float fNum, float sNum);	// declaration of operation functions
float subtract(float fNum, float sNum);
float multiply(float fNum, float sNum);
float divide(float fNum, float sNum);
float operation(int oper, float fNum, float sNum);

int main(void)
{
	float fNum= 0.0f;	// initialize 1st and 2nd input numbers
	float sNum= 0.0f;
	float result = 0.0f;	// result of operation
	int oper = 0;		// operation code

	printf("__| MALCULATOR 1.0 |__\n");
	printf("|| Input 1st number: ");
	scanf("%f", &fNum);

	printf("|| Input 2nd number: ");
	scanf("%f", &sNum);

	printf("|| Choose operation:\n");
	printf("|| 0 add\n|| 1 subtract\n|| 2 multiply\n|| 3 divide\n||=>");
	scanf("%d", &oper);
	
	result = operation(oper, fNum, sNum);
	printf("|| Result: %f\n", result);
	printf("||____________________\n");

	return 0;
}

/*
 * add, subtract, multiply and divide functions
 * they return the value of appropriate operation
 */
 
float add(float fNum, float sNum) {		// add
	return fNum + sNum;
}
float subtract(float fNum, float sNum) {	// subtract
	return fNum - sNum;
}

float multiply(float fNum, float sNum) {	// multiply
	return fNum * sNum;
}

float divide(float fNum, float sNum) {		// divide
	return fNum / sNum;
}

/*
 * operation function, chooses the proper operation
 * based on operation code
 */

float operation(int oper, float fNum, float sNum) {

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
		return printf("Dividing by zero is forbiden.\n");
	}

	else {
		printf("|| ERROR. No operation with index %d.\n"
				"|| Using 'add' as default.\n", oper);
		return add(fNum, sNum);
	}
}
