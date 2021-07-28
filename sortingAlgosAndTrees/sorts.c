#include <tools.h>
#include <stdio.h>
#include <malloc.h>

void insertionSort(int* arr, int length){

    for (int j = 1; j < length; ++j) {
        int key = arr[j];
        int i = j-1;
        while (i>=0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
        printArray(arr,length);

    }

}
void swap(int*arr,int min, int j){
    int temp = arr[min];
    arr[min] = arr[j];
    arr[j] = temp;
}

void selectionSort(int* arr, int len){
    for (int j = 0; j < len - 1; ++j) {
        int min = j;
        for (int i = j+1; i < len; ++i) {
            if (arr[i] < arr[min]) min = i;
        }
        swap(arr,min,j);
        printArray(arr,len);
    }
}


void bubbleSort(int* arr, int len){
    for (int j = len-1; j > 0; --j) {
        for (int i = 0; i < j; ++i) {
            if (arr[i] > arr[i+1]) swap(arr,i,i+1);
            printArray(arr,len);
        }
    }
}


