#include <stdio.h>

int inlist(int, int*, int);
void numIter(int, int*);
int neumannRand(int);

int main() {
    int list[] = {593, 973, 984, 397, 140, 250, 384, 293, 112, 817,
                  674, 800, 261, 891, 843, 159, 857, 922, 579, 475};
    int size = sizeof list / sizeof(int);

    printf("Array:    ");
    // Print list using the array syntax
    for (int i = 0; i < size; i++) {
        printf(" %d", list[i]);
    }
    printf("\n");

    printf("Pointers: ");
    // Print list using the pointer syntax
    int* p = list;
    while (p < &list[size]) {
        printf(" %d", *p);
        p++;
    }
    printf("\n");

    // DO-while loop: continue to ask for numbers until a number is NOT found
    int n;
    do {
        // Your code here
        printf("Enter search item: ");
        scanf("%d", &n);
    } while (inlist(n, list, 20) >= 0);
    printf("\n\n");

    // Ask for a random number seed and print the number of iterations before a
    // repeat.
    int seed;
    do {
        printf("Enter random seed: ");
        scanf("%d", &seed);
    } while (seed < -9999 || seed > 9999);

    printf("Number of iterations until a repeat: ");
    int iterations;
    numIter(seed, &iterations);
    printf("%d", iterations);
    printf("\n");

    return 0;
}

int inlist(int target, int* pool, int size) {
    // Return the position of target in pool or -1 if not found
    for (int i = 0; i < size; i++) {
        if (pool[i] == target) {
            return i;
        }
    }
    return -1;
}

void numIter(int x, int* n) {
    // Set *n to the number of iterations of the random number generator before
    // a repeat is found.
    *n = 0;
    int seed = x;
    int values[500];
    do {
        values[*n] = seed;
        seed = neumannRand(seed);
        *n += 1;

    } while (inlist(seed, values, *n) == -1);
}

int neumannRand(int seed) {
    int result = seed * seed;
    result /= 100;
    result %= 10000;
    return result;
}
