#include <stdio.h>
int globalVar, glob;

int main()  /*@globals undef globalVar;@*/{
	return glob;
}