#include <stdio.h>
int main(){
    // Keep reading numbers till -1 is read
    // Print sum of all numbers read except the last -1
    int num, sum;
    
    // Initially, sum is zero since we have not seen any number yet
    // Like the base case in a proof by induction
    sum = 0;
    
    // Read the first number
    scanf("%d",&num);
    
    // If the very first number is -1, no need to execute loop
    // even for a single iteration. However, if first number is
    // not -1, then add it to the sum and keep reading more numbers
    while(num != -1){
        sum += num;
        scanf("%d",&num);
    }
    
    printf("%d",sum);
    return 0;
}