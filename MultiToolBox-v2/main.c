#include <stdio.h>
#include <stdbool.h>

#include "modules/CriteriaChecker.h"
#include "modules/NumberArray.h"

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

    }

    

    return 0;
}