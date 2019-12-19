#include <stdio.h>
#include <stdlib.h>

int main(){
    /**** Pointers and arrays ****/
    // The array name is actually a pointer variable
    int a[10];
    printf("The address stored at a is %ld\n", a);
    printf("The address of the first element of array a is %ld\n", &a[0]);
    
    *a = 12345; // This will modify the first element of the array
    printf("The new value of the first element is %d\n", a[0]);
    printf("I can also access the first element as %d\n", *a);
    
    return 0;
}