#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int StartsWith(const char *p, const char *s)
{
   if(strncmp(s, p, strlen(p)) == 0) return true;
   return false;
}

int StartsWithArray(char p[5], char a[20][10], int aSize, char o[20][10]){
    int i, j, c;

    c = 0;

    for (i = 0; i<aSize; i++){
        if (StartsWith(p, a[i])){
            strcpy(o[c], a[i]);
            c++;
        }
    }
    return c;
}