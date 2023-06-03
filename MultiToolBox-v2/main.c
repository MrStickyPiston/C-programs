#include <stdio.h>
#include <stdbool.h>

#include "modules/CriteriaChecker.c"
#include "modules/NumberArray.c"
#include "modules/SequenceChecker.c"
#include "modules/SameDistanceChecker.c"
#include "modules/BracketsCloser.c"
#include "modules/StartsWith.c"

int main(){
    int program;
    
    printf("Enter a program: ");
    scanf("%d", &program);

    if (program == 1){
        int n;

        printf("Enter a number: ");
        scanf("%d", &n);

        printf("The nearest number to %d meeting the criteria is %d.\n", n, CriteriaChecker_get_nearest(n));

    } else if (program == 2){
        int i;
        int n;

        printf("Enter a number: ");
        scanf("%d", &n);
        int array[n];
        NumberArray(n, array);

        printf("The resulting array is: [");
        for(i=0; i< sizeof(array)/sizeof(array[0]); i++){
            printf("%d, ", array[i]);
        }
        printf("\b\b]\n");

    } else if (program == 3){
        char s[100];
        printf("Enter a string: ");
        scanf("%s", s);

        char subs[100];
        printf("Enter a substring: ");
        scanf("%s", subs);
        
        if (SequenceCheck(s, subs)) {
            printf("'%s' is a correct substring of '%s'.\n", subs, s);
        } else {
            printf("'%s' is not correct substring of '%s'.\n", subs, s);
        }
        
    } else if (program == 4){
        int n[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500, 510, 520, 530, 540, 550, 560, 570, 580, 590, 600, 610, 620, 630, 640, 650, 660, 670, 680, 690, 700, 710, 720, 730, 740, 750, 760, 770, 780, 790, 800, 810, 820, 830, 840, 850, 860, 870, 880, 890, 900, 910, 920, 930, 940, 950, 960, 970, 980, 990, 1000};
        int size = sizeof(n)/sizeof(n[0]);

        printf("Using a hardcoded array...\n");

        if (SameDistanceCheck(n, size)){
            printf("No problems found.\n");
        }

    } else if (program == 5){
        char s[100];
        int size = 0, newSize, i;

        printf("Enter the brackets: ");
        scanf("%s", s);

        while (s[size] != 0x00){
            size++;
        }

        newSize = BracketsCloser(s, size);

        printf("The resulting splitted brackets are: ");
        for (i = 0; i<newSize; i++){
            printf("%c", s[i]);
        }

    } else if (program == 6){
        char a[20][10] = {"kat", "auto", "kalf", "midden", "kaviaar"};
        char o[20][10];

        char p[5] = "ka";

        int i, j, oSize;

        printf("Using a hardcoded array...\n");


        oSize = StartsWithArray(p, a, 3, o);

        printf("The resulting array is: ['");
        for (i=0; i<oSize; i++){
            for (j = 0; j<strlen(o[i]); j++){
                printf("%c", o[i][j]);
            }
            printf("','");
        }   
        printf("\b\b]");
        printf(" \n");
    }
    return 0;
}