#include <stdio.h>

/*******************
This is code for selection sort
*******************/

// Find the index of the maximum value in an array
int findMax(int *arr, int len){
    int maxIdx = 0, maxVal = arr[0];
    for(int i = 1; i < len; i++)
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIdx = i;
        }
    return maxIdx;
}

// Swap two integers, of which, addresses are known
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Print an array neatly
// Also denote the active region using brackets
void print(int *arr, int len, int left){
    printf("[");
    if(left == 0) printf("]");
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
        if(i == left-1) printf("]");
        else if(i < len - 1) printf(" ");
    }
    printf("\n");
}

// len: length of the array
// left: size of the active region
void doSelSort(int *arr, int len, int left){
    if(left != 0){
        int maxIdx = findMax(arr, left);
        swap(arr + left - 1, arr + maxIdx);
        printf("After iteration %d: ", len - left + 1);
        print(arr, len, left - 1);
        doSelSort(arr, len, left - 1);
    }
}

int main(){
    int arr[10] = {8,9,6,3,4,2,1,5,10,7};
    printf("Initial: ");
    print(arr, 10, 10);
    doSelSort(arr, 10, 10);
    return 0;
}