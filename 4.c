#include <stdbool.h>
#include <stdio.h>

bool is_palindrome_num(int n) {
    int copy = n;
    int reverse = 0;

    while (copy != 0) {
        reverse = (reverse * 10) + (copy % 10);
        copy = copy / 10;
    }

    return reverse == n;
}

int find_largest_palindrome_num() {
    int largest_palindrome = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome_num(i * j)) {
                if (product > largest_palindrome) {
                    largest_palindrome = product;
                }
            }
        }
    }

    return largest_palindrome;
}

int main(void) {
    printf("%d\n", find_largest_palindrome_num());
    return 0;
}