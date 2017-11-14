/*
 ============================================================================
 Name        : test_bbb.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(const int argc, char** argv) {

	int output = 0;
	int num1, num2;
	char op;

	if (argc != 4)
	// if there in more or less than 2 arguments
			{
		printf("wrong number of arguments\nfile : %s \n", argv[0]);
		return (0);
	}

	sscanf(argv[1], "%d", &num1);
	sscanf(argv[3], "%d", &num2);
	sscanf(argv[2], "%c", &op);

	printf("%s %s %s\n", argv[1], argv[2], argv[3]);

	switch (op) {
	case '+': //plus case
		output = num1 + num2;
		break;
	case '-': //minus case
		output = num1 - num2;
		break;
	case 'x': //gange case
		output = num1 * num2;
		break;
	case '/': //divider case
		output = num1 / num2;
		break;
	default: // if no cases
		printf("switch default\n");
		break;
	}

	printf("The result is = %d\n", output);
	return 0;
}
