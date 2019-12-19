#include <stdio.h>

int main(){
    /* A sequence is non-decreasing if and only if all consecutive numbers
    in that sequence are non-decreasing. E.g. the sequence 1 2 2 4 is non
    decreasing since the pairs 1 2, 2 2, 2 4 are all non-dec. However, the
    sequence 1 2 3 4 5 2 3 4 is not non-dec since the pair 5 2 violates the
    non-decreasing rule. */
    
    /* Thus, we need to store two numbers otherwise how will we compare
    the current number to previous number? */
    int curr, prev;
    int isFirst = 1; // 1 = reading 1st number, 0 = reading 2nd or later
    // Required as we dont have a previous number to compare to 1st number
    int isNonDec = 1; // Initially I am optimistic that sequence is non-dec
    
    scanf("%d",&curr);
    
    while(curr != -1){
        if(isFirst){ // No need to compare this number to previous
            isFirst = 0; // We have already seen the first number
            // From now on, all numbers must be compared to previous
            prev = curr; // Set prev = curr to compare to next number
        }
        else{ // We are reading 2nd or later number
            if(curr < prev)
                isNonDec = 0; // My trust is violated
                /* Note that isNonDec is never set back to 1 once
                it is set to 0. I trusted the sequence, but once
                it violates my trust I never trust the sequence again.
                This is because once we see even one decreasing pair,
                we are sure the sequence can never be non-decreasing */
            prev = curr; // Set prev = curr to compare to next number
        }
        scanf("%d",&curr); // Scan the next number
    }
    if(isNonDec) printf("YES");
    else printf("NO");
    
    return 0;
}