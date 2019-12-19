#include <stdio.h>

int fact(int a){
    if(a == 0) return 1; // Dont forget the base case
    // Will get time and memory exceeded runtime errors
    // if base case is missing or is wrong
    return a * fact(a - 1);
}

int fib(int n){
    if(n == 1) return 0; // Dont forget the base case
    // Will get time and memory exceeded runtime errors
    // if base case is missing or is wrong
    if(n == 2) return 1; // In this problem, there are two base cases
    // Both must be taken care of with no mistakes
    return fib(n-1) + fib(n-2);
}

int gcd(int a, int b){
    if(a < b) return gcd(b, a);
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main(){
    printf("Factorial of 5 is %d\n", fact(5));
    int i, prod = 1;
    // Sometimes, code written using simple loops
    // can be faster than recursive code since creating
    // all these clones of Mr C is an expensive process
    for(i = 1; i <= 5; i++)
        prod *= i;
    printf("Factorial of 5 is %d\n", prod);
    printf("GCD of 9 and 12 is %d\n", gcd(9, 12));
    return 0;
}