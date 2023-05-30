#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int BracketsCloser(char s[], int size){
    //Returns array length
    int BracketCount = 0, breaks = 0, i;
    char temp[2*size];

    for (i=0; i<size; i++){
        if (s[i] == *"("){
            BracketCount += 1;
        } else if (s[i] == *")"){
            BracketCount -= 1;
        }

        temp[i+breaks] = s[i];

        if (BracketCount == 0){
            breaks += 1;
            temp[i+breaks] = *" ";
        }
    }

    strcpy(s, temp);
    return size+breaks;
}