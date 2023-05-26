#include <stdio.h>
#include <stdbool.h>

static int* NumberArray(int n, int array[]){
    int i;

    for (i = 0; i < n; i++){
        array[i] = i*2+n;
    }

    return 0;
}
