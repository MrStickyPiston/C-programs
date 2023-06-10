#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void GradeConverter(double n, char o[3]){
    double gradesN[8] = {9.0, 8.5, 8.0, 7.5, 7.0, 6.5, 6.0, 0.0};
    char gradesC[8][3] = {"A+", "A", "A-", "B", "B-", "C", "D", "F"};

    int i;
    
    n *= 2;

    for (i = 0; i < 8; i++){
        if (n >= gradesN[i]){
            printf("%d, %f\n", i, n);
            strcpy(o, gradesC[i]);
            return;
        }
    }
}
