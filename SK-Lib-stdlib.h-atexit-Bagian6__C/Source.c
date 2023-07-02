#include <stdlib.h>
#include <stdio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void f1(void) {
    puts("f1");
}

void f2(void) {
    puts("f2");
}

int main(void) {
    if (!atexit(f1) && !atexit(f2) && !atexit(f2)) {
        return EXIT_SUCCESS;
    }
        
    return EXIT_FAILURE;
}