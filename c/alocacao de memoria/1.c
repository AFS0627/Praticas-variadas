#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    clock_t inicio = clock();

    volatile double x = 0.0;

    while (((double)(clock() - inicio) / CLOCKS_PER_SEC) < 10.0) {
        for (long long i = 0; i < 1000000; i++) {
            x += sqrt((double)i);
        }
    }

    printf("Resultado: %f\n", x);
    return 0;
}