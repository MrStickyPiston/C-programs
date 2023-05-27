#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static int SequenceCheck(char s[], char subs[]){
    if (strstr(s, subs) != NULL){
        return true;
    } else {
        return false;
    }
}