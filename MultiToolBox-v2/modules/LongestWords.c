#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STRING_LEN 1024
#define MAX_OUT_LENGTH 10
#define MAX_WORD_LENGTH 32

int GetLongestWords(char s[MAX_STRING_LEN], char o[MAX_OUT_LENGTH][MAX_WORD_LENGTH]){
    int i, j;
    int wlen = 0;
    int max_wlen = 0;
    int index[MAX_OUT_LENGTH];
    int indexc = 0;

    char temp[MAX_WORD_LENGTH];

    for (i = 0; i<strlen(s); i++){
        if (s[i] != ' ' && s[i] != '\0' && isalpha(s[i])){
            wlen ++;
            continue;
        } 
        if (wlen > max_wlen){
            indexc = 1;

            max_wlen = wlen;
            index[0] = i - max_wlen;

        } else if (wlen == max_wlen){
            index[indexc] = i-max_wlen;
            indexc++;
        }
        wlen = 0;
    }

    for (i=0; i<indexc; i++){
        for (j = 0; j < max_wlen; j++) {
            temp[j] = s[index[i]+j];
        }
        temp[max_wlen] = '\0';
        strcpy(o[i], temp);
    }

    return indexc;
}