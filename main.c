#include <stdio.h>
#include "stdlib.h"

int * createArray(int r, int c)
{
    int *new_array = (int*) malloc((r*c)*sizeof(int));
    return new_array;
}

void fillArray(int *array, int r, int c)
{
    for (int i = 0; i < (r*c); ++i)
    {
        int some_value;
        scanf("%i", &some_value);
        array[i] = some_value;
    }
}

void showArray(int *array, int r, int c)
{
    for (int i = 0; i < (r*c); ++i)
    {
        printf("%i ", array[i]);
        if ((i + 1) % c == 0) printf("\n");
    }

}

int main() {
    int r, c;

    printf("Write rows and columns of two-dimensional array\n");
    scanf("%i%i", &r, &c);
    printf("%i %i\n", r, c);

    int *new_array = createArray(r, c);

    fillArray(new_array, r, c);

    showArray(new_array, r, c);

    free(new_array);

    return 0;
}