#include <stdbool.h>
#include <stdio.h>

long scm() {
    int i = 2520;
    while (true) {
        if (i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 &&
            i % 7 == 0 && i % 8 == 0 && i % 9 == 0 && i % 11 == 0 &&
            i % 13 == 0 && i % 16 == 0 && i % 17 == 0 && i % 19 == 0) {
            return i;
        }
        i++;
    }
}

int main(void) {
    printf("%ld\n", scm());
    return 0;
}