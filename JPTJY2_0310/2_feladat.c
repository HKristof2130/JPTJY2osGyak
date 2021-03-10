#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char command[15];
    int i=0;
    char ch;
    while(i<14&& (ch=getchar()) !='\n'){
        command[i++]=ch;
    }
    command[i]='\0';
    system(command);
    return 0;
}
