#include<stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // Se não houve a troca de elementos
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%4d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = { 66, 30, 27, 13, 25, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array (size %d): \n", n);
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}