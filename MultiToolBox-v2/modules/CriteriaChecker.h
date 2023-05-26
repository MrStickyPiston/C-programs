#include <stdio.h>
#include <stdbool.h>

static int CriteriaChecker_check(int n){
    if (n < 256){
        return false;
    } else if (n % 34 != 4){
        return false;
    } else {
        return true;
    }
}

static int CriteriaChecker_get_nearest(int n){
    int a = n;
    int b = n;

    if (CriteriaChecker_check(n)) {
        return n;
    } else {

        while (true){
            a --;
            b ++;

            if (CriteriaChecker_check(a)){
                return a;
            } else if (CriteriaChecker_check(b)){
                return b;
            }
        }
    }
}