#include <stdio.h>
int main(){
    char name[30];
    int length =0;

    printf("Please enter the name you would like to find the length\n");

    scanf("%29s", name);
     
    while (name[length]!= '\0'){
        length+=1;
    } 

    printf("the lenght of your word is %i", length);
    return 0;
}