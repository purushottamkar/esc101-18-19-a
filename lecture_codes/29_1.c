#include <stdio.h>

// When arrays are passed, just a pointer to the first
// element is passed. We must pass the length of the array
// separately as a separate argument
// Can use either pointer notation or array notation in function
// declaration. Both are the same 
void arrcpy(int* dest, int src[], int len){
    int a[10];
    printf("Size of the array a is %d bytes\n", sizeof(a));
    printf("Size of the array src passed to me is %d bytes\n", sizeof(src));
    printf("Size of the array dest passed to me is %d bytes\n", sizeof(dest));
    int i;
    for(i = 0; i < len; i++)
        dest[i] = src[i];
}

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {0,0,0,0,0,0,0,0,0,0};
    printf("Size of array a is %d bytes\n", sizeof(a));
    arrcpy(b, a, 5); // Copy 5 elements of a into b
    for(int i = 0; i < 10; i++)
        printf("%d ", b[i]);
}