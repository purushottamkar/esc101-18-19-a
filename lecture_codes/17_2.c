#include <stdio.h>

int main(){
    int i, a[3] = {1,2,3}, b[3] = {4,5,6}, c[3];
    
    // WARNING: uninitialized arrays contain garbage!
    for(i = 0; i < 3; i++)
        printf("%d ", c[i]);
    
    // Cannot assign elements in array c to those in array a by writing
    // c = a;
    // The above will cause an error
    // Need to ourselves assign each individual element of a to
    // the corresponding element in c
    for(i = 0; i < 3; i++)
        printf("%d ", c[i]);
    for(i = 0; i < 3; i++)
        c[i] = a[i];
    
    // Now c will contain the elements of a
    for(i = 0; i < 3; i++)
        printf("%d ", c[i]);
    
    // Equality checks cannot be done by writing
    // a == b;
    // Always evaluates to false - reason a bit later in course
    // To check two arrays for equality, have to do it the hard way
    int isEqual = 1;
    for(i = 0; i < 3; i++)
        if(c[i] != a[i])
            isEqual = 0;
    
    if(isEqual)
        printf("\nEqual\n");
    else
        printf("\nNot Equal\n");
    
    return 0;
}