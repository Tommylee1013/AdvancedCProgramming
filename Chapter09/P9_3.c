//
// Practice 9-3
// Created by Junghun Lee on 1/6/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

// main
int main(void) {
    int size = 5;
    int num;
    static int i;
    int * arr = (int *) malloc(sizeof(int) * 5); // memory allocation

    if (arr == NULL) {
        printf("Memory allocation failed.\n"); // malloc failed
        exit(1);
    }

    while (1) {
        printf("Enter the number : ");
        scanf("%d", & num);
        if (num == -1) break;
        if (i == size) {
            size += 3;
            int * _temp = (int *) realloc(arr, size * sizeof(int)); // re allocation
            if (_temp == NULL) {
                printf("Memory re-allocation failed.\n"); // realloc failed
                free(arr);
                exit(1);
            }
            arr = _temp;
        }
        arr[i] = num;
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }

    free(arr);

    return 0;
}