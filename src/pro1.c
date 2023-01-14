/*
 ============================================================================
 Name        : pro1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
	long result;
	printf("enter first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	result=((num1+num2)*3)-10;
	printf("the result is %ld",result);
	fflush(stdout);
}
