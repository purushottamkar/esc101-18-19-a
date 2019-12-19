#include <stdio.h>

// n tell us which number is to be partitioned
// next tells us the location in the string where to print next
// min tell us the minimum number we must choose next
void partition(char *str, int n, int next, int min){
    if(n == 0){
        str[next] = '\0';
        printf("%s\n", str);
        return;
    }
    int i;
    // If this is not the first number in the partition
    // we need a plus sign before we print the next number
    if(next)
        str[next++] = '+';
    // Start from min so that numbers in a partition are always
    // in a non-decreasing order. This ensures that we will never
    // repeat a partition twice
    for(i = min; i <= n; i++){
        str[next] = '0' + i;
        // We have already absorbed i so now partitions of n-i needed
        // All future numbers in this partition must be at least i
        partition(str, n - i, next + 1, i);
    }
}

int main(){
    char str[100];
    // This code will output partitions in lexicographically increasing
    // order. No partition will be repeated twice
    // This code will not work for paritions of number greater than 9
    // For that, see the other code supplied with this lecture
    partition(str, 9, 0, 1);
    return 0;
}