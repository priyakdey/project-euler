#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_CAP 1000000

uint8_t *buffer;

int get_nth_prime(int n) {
    int prime_number = 2;
    for (int i = 0; i < MAX_BUFFER_CAP; i++) {
        if (buffer[i] == 0) {
            prime_number = i;
            n--;
        }

        if (n == 0) {
            break;
        }
    }

    return prime_number;
}

void sieve() {
    for (int i = 2; i <= MAX_BUFFER_CAP; i++) {
        if (buffer[i] == 0) {
            // start marking the multiples of this index expect this index
            for (int j = 2 * i; j <= MAX_BUFFER_CAP; j = j + i) {
                buffer[j] = 1;
            }
        }
    }
}

void init() {
    buffer = (uint8_t *)malloc(MAX_BUFFER_CAP * sizeof(int));

    if (buffer == NULL) {
        fprintf(stderr,
                "ERROR: Cannot allocate memory.Buy more ram... LOL !\n");
        exit(1);
    }

    for (int i = 1; i <= 10; i++) {
        buffer[i] = 0;
    }

    // make 0, 1 explicit 1
    buffer[0] = 1;
    buffer[1] = 1;
}

void dump_array() {
    printf("[");
    for (int i = 0; i < MAX_BUFFER_CAP; i++) {
        printf("%hhu, ", buffer[i]);
    }
    printf("]\n");
}

int main(void) {
    init();
    // dump_array();

    sieve();
    // dump_array();

    printf("%d\n", get_nth_prime(10001));

    return 0;
}
