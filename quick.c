#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high, int ch) {
    int pivot_ind;
    switch(ch){
        case 1:
        pivot_ind = (low + high) / 2;
        break;
        case 2:
        pivot_ind = low;
        break;
        case 3:
        pivot_ind = high;
        break;
        default:
        printf("Invalid choice");
        
    }
    int pivot = arr[pivot_ind];
    swap(arr, pivot_ind, high);  
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high); 
    return i + 1;
}

void quickSort(int arr[], int low, int high, int ch) {
    if (low < high) {
        int pi = partition(arr, low, high,ch);
        quickSort(arr, low, pi - 1,ch);
        quickSort(arr, pi + 1, high,ch);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n,ch,pivot,pivot_ind;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int size = n;
    printf("Original array: ");
    printArray(arr, size);
    printf("Select one: \n");
    printf("1. Mid element approach. \n");
    printf("2. Hoare's approach. \n");
    printf("3. Lomuto's approach \n");
    printf("Choose (1/2/3):");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        pivot_ind = (0 + (size-1)) / 2;
        pivot = arr[pivot_ind];
        printf("Starting pivot for this case is %d \n", pivot);
        quickSort(arr, 0, size - 1,ch);
        printf("Sorted array: ");
        printArray(arr, size);
        break;
        case 2:
        pivot_ind = 0;
        pivot = arr[pivot_ind];
        printf("Starting pivot for this case is %d \n", pivot);
        quickSort(arr, 0, size - 1,ch);
        printf("Sorted array: ");
        printArray(arr, size);
        break;
        case 3:
        pivot_ind = size-1;
        pivot = arr[pivot_ind];
        printf("Starting pivot for this case is %d \n", pivot);
        quickSort(arr, 0, size - 1,ch);
        printf("Sorted array: ");
        printArray(arr, size);
        break;
        default:
        printf("Invalid choice. \n");
    }

    return 0;
}
