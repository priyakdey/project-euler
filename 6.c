#include <stdio.h>

int find_diff() {
    int sum = 0, sq_sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        sq_sum += i * i;
    }

    return (sum * sum) - sq_sum;
}

int main(void) {
    printf("%d\n", find_diff());
    return 0;
}