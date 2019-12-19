#include <stdio.h>
int main(){
    // Print the sum of the reciprocals of the first n natural numbers
    int n, i;
    double sum;
    scanf("%d",&n);
    
    // Initially, sum is zero since we have not seen any number yet
    // Like the base case in a proof by induction
    sum = 0.0;
    for(i = 1; i <= n; i++)
        sum = sum + 1.0/i;
    
    printf("%lf",sum);
    return 0;
}