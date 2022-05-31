#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[100];
    char *descp;
    strcpy(name,"Trevor");
    if (descp==NULL){
        fprintf("Error, unable to allocate memory");

    }else{
        strcpy(descp,"That is my name");
    }
    printf("%s",descp);
    return 0;

}