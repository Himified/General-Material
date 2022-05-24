#include <stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int n;
    char line[100];
    printf("Enter comment: ");
    gets(line);
    n=strlen(line);
    if (line[0] == '/' && line[1] == '/') {
        printf("It is a single-line comment");
        return 1;
    }

    if (line[n- 2] == '*'&& line[n- 1] == '/' && line[0] == '/' && line[1] == '*') {
        printf("It is a multi-line comment");
        return 1;
    }

    printf("It is not a comment");
    return 0;
}
