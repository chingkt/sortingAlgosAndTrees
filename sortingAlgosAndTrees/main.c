#include <stdio.h>
#include <string.h>

void printArray(int arr[], int len) {
    printf("[");
    for(int i = 0; i < len - 1; i++) {
        printf("%d,", arr[i]);
    }
    printf("%d]\n", arr[len - 1]);
}

void swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void sort(int arr[], int len) {
    for(int j = len - 1; j > 0; j--) {
        for(int i = 0; i < j; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr, i, i+1);
            }
        }
    }
}

int main() {
    int unordered[] = {0,0,0,-1,0,100,23,432,32,432,4645,213,5436,3452,4312,432,324,324,543,5,3,57,54};
    printf("Start algorithm with input: ");
    printArray(unordered, 23);
    sort(unordered, 23);
    printf("Final result: ");
    printArray(unordered, 23);
    return 0;

}