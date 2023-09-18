#include <stdio.h>

int calc_sum_of_multiples_of_3_or_5(int range) {
    int sum = 0;

    for (int i = 3; i < range; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void) {
    int sum = calc_sum_of_multiples_of_3_or_5(1000);
    printf("%d\n", sum);
    return 0;
}
