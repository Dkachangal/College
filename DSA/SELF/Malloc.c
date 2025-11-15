#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 10;
    int *p = NULL;

    /* sizeof(p) prints the size of the pointer itself (bytes), not
       the number of elements you've allocated. On your build this
       is 4 (32-bit pointer) or 8 (64-bit pointer). */
    printf("sizeof(p) = %zu bytes\n", sizeof(p));
    printf("sizeof(int) = %zu bytes\n\n", sizeof(int));

    /* Allocate with malloc (uninitialized) and initialize to avoid
       printing indeterminate (garbage) values. */
    int *arr = malloc(x * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }
    for (int i = 0; i < x; ++i) arr[i] = i + 1; /* set known values */

    printf("arr elements after initialization:\n");
    for (int i = 0; i < x; ++i) printf("%d\t", arr[i]);
    printf("\n\n");

    /* sizeof(arr) here prints the size of the pointer variable arr,
       not the total allocation. To know how many elements you have,
       you must keep track of 'x' yourself. */
    printf("sizeof(arr) = %zu bytes (pointer)\n", sizeof(arr));
    printf("Number of elements allocated (x) = %d\n\n", x);

    /* calloc allocates and zero-initializes memory */
    int *carr = calloc(x, sizeof *carr);
    if (!carr) {
        perror("calloc");
        free(arr);
        return 1;
    }
    printf("carr elements after calloc (should be all 0):\n");
    for (int i = 0; i < x; ++i) printf("%d\t", carr[i]);
    printf("\n\n");

    free(arr);
    free(carr);

    /* Demo reading characters safely */
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        char *character = calloc((size_t)n, sizeof *character);
        if (!character) {
            perror("calloc");
            return 1;
        }
        for (int i = 0; i < n; ++i) scanf(" %c", &character[i]);
        for (int i = 0; i < n; ++i) printf("%c\t", character[i]);
        printf("\n");
        free(character);
    }

    return 0;
}