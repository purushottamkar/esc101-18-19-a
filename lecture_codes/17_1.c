#include <stdio.h>
#include <limits.h>

int main(){
    int a[5], b[5];
    int i, j;
    
    // Note: a[1.0] is illegal access
    // However, a[(int)1.0] is perfectly fine
    
    // First read all the elements of both arrays
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    
    
    // Be careful about how you initialize runningMin
    /* If you set runningMin too small then no element of a
    will be ever set to runningMin even if that element is
    not present in b */
    // Try setting runningMin = 10 and give the input
    // 100 200 300 400 500
    // 11 12 13 14 15
	// You will get a wrong value
    // limits.h provides the constant INT_MAX which is the maximum value
	// that can be stored inside an int variable
    // An alternative is to find the maximum value in a, say maxA
    // and set runningMin = maxA + 1 or something like that
    int runningMin = INT_MAX;
    int isPresent;
    
    for(i = 0; i < 5; i++){
        // Need to reset flag every time checking a new element of a
        isPresent = 0;
        for(j = 0; j < 5; j++)
            if(a[i] == b[j])
                isPresent = 1;
        // If we find an element of a not present in b
        // Check if it is smaller than the previous such element
        // If initial value of runningMin is too small, this test
        // will fail
        if(!isPresent)
            if(a[i] < runningMin)
                runningMin = a[i];
    }
    
    printf("%d", runningMin);
    
    return 0;
}