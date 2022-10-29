// main.c -- calculates two numbers

#include <stdio.h>

float add(float, float);
float multiply(float, float);

int main(void) {

	float num1, num2;
	float sum_result, mult_result;

	printf("Enter the first number: ");
	scanf("%f", &num1);

	printf("Enter the second number: ");
	scanf("%f", &num2);

	sum_result = add(num1, num2);
	mult_result = multiply(num1, num2);

	printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, sum_result);
	printf("Product of %.2f and %.2f is %.2f\n", num1, num2, mult_result);

	return 0;
}

float add(float x, float y) {

	return x + y;
}

float multiply(float x, float y) {

	return x * y;
}
