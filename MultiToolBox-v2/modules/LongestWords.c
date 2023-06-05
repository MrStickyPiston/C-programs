#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STRING_LEN 1024
#define MAX_OUT_LENGTH 10
#define MAX_WORD_LENGTH 32

int GetLongestWordLength(char s[MAX_STRING_LEN]){

}

int GetLongestWords(char s[MAX_STRING_LEN], char o[MAX_OUT_LENGTH][MAX_WORD_LENGTH]){
    int i, j;
    int wlen, max_wlen = 0;
    char index[MAX_OUT_LENGTH];
    int indexc = 0;



    for (i = 0; i<strlen(s); i++){
        if (s[i] != ' ' && s[i] != '\0'){
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

    printf("Amount of indices: %d\n", indexc);

    for (i=0; i<indexc; i++){
        printf("%s", &index[i]);

        for (j = 0; j < max_wlen; j++) {
            o[i][j] = s[index[i]+j];
        }
    }

    for (i=0; i<indexc; i++){
        printf("%s\n", o[i]);
    }

    return strlen(o[0]);
}

int main(){
    char o[10][32];
    GetLongestWords("This is very nice list of random shitty words", o);
}