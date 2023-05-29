#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int get_difference(int a, int b){
    if (a>b){
        return a - b;
    } else{
        return b -a;
    }
}

int SameDistanceCheck(int n[], int size){
    int d, i;

    if (size != 100){
        printf("Wrong size, size is %d but should be 100.\n", size);
        return false;
    }

    d = get_difference(n[0], n[1]);

    
    for (i = 1; i<size; i++){
        if(get_difference(n[i-1], n[i]) != d){
            printf("Wrong difference at n[%d]: %d. n[%d] should be %d.\n", i, get_difference(n[i-1], n[i]), i, n[i-1] + d);
            return false;
        }
    }

    return true;
}
