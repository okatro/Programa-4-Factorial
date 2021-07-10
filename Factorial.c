/* *****************************************************************
* Factorial.c
* Calculate the factorial of a number
*
* Author: Covarrubias Minez Brandon Ivan
* License: MIT
*
* GitHub: https://github.com/okatro/Programa-4-Factorial
*
* *****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Prototypes
unsigned long long factorial(int Num);
int isInt(char* Ap);

int main(int argc, char** argv){

	//Check the input, there should only be one integer and positive parameter
	if(argc != 2 || !isInt(argv[1])){
		printf("Usage %s PositiveNumber\n",argv[0]);
		exit(0);
	}

	printf("%llu \n", factorial(atoi(argv[1])));
}

//Returns the factorial of a number
unsigned long long factorial(int Num){
	return Num==0 ? 1 : (factorial(Num-1)*Num);
}

//Verify that the parameter is a positive integer
int isInt(char* Ap){
	while (*Ap != 0){
		if(!isdigit(Ap[0]))
			return 0;
		++Ap;
	}
	return 1;
}