#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int data;
    data = inputTester(str);
    printf("The decimal form : %d",data);
    return 0;
}

int inputTester(char *string){
    int i,flag = 0;
    for(i=0;string[i]!='\0';i++){
        if(!(string[i]>='0' && string[i]<='9'))
            flag = 1;
    }
    if(flag==1){
        printf("Invalid input");
        exit(0);
    }
    else
        return atoi(string);
}

