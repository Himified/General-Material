#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void BufferO(char *ptr)/*@requires maxSet(ptr) >= 10 @*/
{
    ptr  = (char*) malloc(10);
    ptr[10] = 'c';
}

int main(){
    printf("Checking Buffer Overflow");
    return 0;
}