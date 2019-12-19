#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *arr = (int*)malloc(10 * sizeof(int));
    arr[0] = 42;
    arr = (int*)malloc(5 * sizeof(int));
    // Uh oh - previous array of size 10 lost
    // Value 42 stored at arr[0] is lost too :(
    printf("The value at arr[0] is %d\n", arr[0]);
    arr[0] = 4;
    free(arr); // Frees the length 5 array but not the length 10 array
    printf("The value at arr[0] is %d\n", arr[0]); // May cause segfault
    // since the location arr[0] has been released back to Mr C
    free(arr); // Will cause segfault/runtime error
    // Cannot free an already bunch of memory
    return 0;
}