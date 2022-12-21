#include <stdio.h>
typedef enum{
    YES,
    NO,
    DEFINITELY,
    PROBABLY,
    MAYBE
} ynm;

void decide(ynm y){
    switch (y){
    case PROBABLY:
    case NO:
        printf("No!");
    case MAYBE:
        printf("Maybe");
    case YES:
        printf("Yes!");
    case DEFINITELY:
        printf("Definitely!");
    }
}

int main(){
    printf("Checking fall through switch cases");
    return 0;
}