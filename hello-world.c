#include <stdio.h>

int main(){
    char name[20];

    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    
    printf("Hello world, %s\n", name);
}