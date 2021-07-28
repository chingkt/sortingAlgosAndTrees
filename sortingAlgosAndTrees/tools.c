#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArray(int*arr, int length){
    for (int k = 0; k < length; ++k) {
        printf("%d, ",arr[k]);
    }
    printf("\n");
}