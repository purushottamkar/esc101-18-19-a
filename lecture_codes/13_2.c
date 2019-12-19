#include <stdio.h>
int main(){
    // Read n from input, then scan n numbers
    // Print how many numbers were divisible by 3 or divisible by 5
    int n, i, num, count;
    
    // Initially count = 0 since we have not seen any numbers yet
    // Like the base case in an inductive argument
    count = 0;
    scanf("%d",&n);
    
    // For loop now runs from 1 to n
    for(i = 1; i <= n; i++){
        scanf("%d",&num);
        if((num % 3 == 0) || (num % 5 ==0))
            count++;
    }
    
    printf("%d",count);
    return 0;
}