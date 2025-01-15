#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n){
    int i, j, flag = 1;
    for (i = 0; i < n - 1 && flag == 1; i++) {
        flag = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(){
    int arr[] = {6, 7, 2, -9, 1, -2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}