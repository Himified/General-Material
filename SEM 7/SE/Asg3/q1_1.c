#include <stdio.h>

void infy(){
    int i = 1;
    while(i<10)
    {
        printf("%d\n", i); 
    }  
}

int main(){
    printf("Checking for likely infinite loops");
    return 0;
}