#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime_num(long n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (long i = 2; i <= sqrtl(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

long find_largest_prime_factor(long n) {
    if (is_prime_num(n)) return n;

    long sqrt_n = (long)sqrtl(n);
    for (int i = sqrt_n; i >= 2; i--) {
        if (n % i == 0 && is_prime_num(i)) {
            return i;
        }
    }

    return 1;
}

int main(void) {
    printf("Largest Prime Factor of 600851475143 = %ld\n",
           find_largest_prime_factor(600851475143));
    return 0;
}