#include <stdio.h>

void insertionSort(int arr[], int n){ 
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        } 
        arr[j + 1] = key;
     } 
}

int main(){
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}