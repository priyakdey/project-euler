#include <stdio.h>

#define RANGE 4000000

long calc_sum_even_fib_terms() {
    long first = 1, second = 2;
    long sum = 2;

    while (second <= RANGE) {
        int temp = first;
        first = second;
        second = temp + first;

        if (second % 2 == 0) {
            sum += second;
        }
    }

    return sum;
}

int main(void) {
    printf("%ld\n", calc_sum_even_fib_terms());
    return 0;
}