#include <stdio.h>

int main(){
    // Can declare arrays, individual variables, on the same line
    int i, a[20], N;
    
    // Be careful, the above array has only 20 elements a[0] to a[19]
    // The following two lines will generate warnings
    a[-1] = 20;
    a[20] = 33;
    
    // However, do not rely on Mr C's warnings. He is easily fooled.
    // The following lines do the exact same illegal operations but no warnings generated
    int j = -1, k = 20;
    a[j] = 20;
    a[k] = 33;
    
    // Read N < 20 elements into the array a
    scanf("%d", &N);
    
    if(N > 20) // Do not have space for more than 20 elements in the array
        printf("Error");
    else{
        // Remember, the first array element is a[0] and not a[1]
        // The last array element is a[19] and not a[20]
        // Very popular to start loops from 0 because of this
        
        // Take loop upto N-1 since there are only N elements to be read
        // Nth element in the array is a[N-1]
        for(i = 0; i < N; i++)
            scanf("%d", &a[i]);
        
        // Print alternate elements i.e. a[0] a[2] a[4] ...
        // Remember, we do not necessarily have 20 elements in array, just N
        for(i = 0; i < N/2; i++){
            printf("%d", a[2*i]); // The array subscript can be an integer expression as well
            if(i < N/2 - 1) // If not the last element to be printed, print a space as well
                printf(" ");
        }
        
        if(N % 2){ // If we have an odd number of elements then above code will miss the last element in the alternate sequence
            if(N > 1) printf(" "); // need another space
            printf("%d", a[N-1]);
        }
        
        printf("\n");
        
        // A more elegant way to print alternate array elements
        for(i = 0, j = 2*i; j < N; i++, j = 2*i){
            printf("%d", a[j]); // The array subscript can be an integer expression as well
            if(j < N - 1) // If not the last element to be printed, print a space as well
                printf(" ");
        }
        
        printf("\n");
        
        // Print all elements in the array in reverse order with a space in between
        for(i = N-1; i >= 0; i--){
            printf("%d", a[i]);
            if(i > 0) // If not the last element to be printed, print a space as well
                printf(" ");
        }
    }
    return 0;
}