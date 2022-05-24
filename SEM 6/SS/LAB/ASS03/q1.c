#include <stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char str[40],n;
    int flag=0,i;
    printf("Enter the Identifier: ");
    gets(str);
    n=strlen(str);
    if(! ((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z') || str[0]=='_')){
        flag=1; 
    }

    for(i=1; i<n; i++){
        if (!((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')|| 
        (str[i] >= '0' && str[i] <= '9') || str[i] == '_')){
            flag=1;
        }
    }

    if (flag==1){
        printf("Its not a valid identifier");
    }else{
        printf("Its a valid identifier");
    }
    return 0;
}
