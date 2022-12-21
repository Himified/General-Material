#include <stdio.h>
int globalVar = 5, glob = 10;
int f(void)  /*@globals globalVar;@*/ {
	return glob;
}
int main(){
	return 0;
}