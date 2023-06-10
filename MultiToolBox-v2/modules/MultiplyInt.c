#include <stdio.h>
#include <stdbool.h>

int MultiplyInt(long int n){
    int temp = 1;
    bool isNotZero = false;

    while (n != 0) {
        if  ((n % 10) % 2){
            isNotZero = true;
            temp *= (n % 10);
        }
        n /= 10;
    }

    if (!isNotZero){
        temp = 0;
    }

    return temp;
}