#include <stdio.h>
#include <string.h>

int main(){
    char str[5];
    
    /********** DANGERS OF gets and scanf **************/
    
    // Try entering "abcdefghijklmnop" (without quotes)
    // You will find that Clang enlarges the array to accommodate the enlarged input
    // However, try entering "abcdefghijklmnopq" (without quotes)
    // or something much larger - you will get a runtime error
    gets(str);
    
    // The same holds true for scanf as well
    // scanf("%s", str);
    // Your program will crash if user input is too long
    
    puts(str);
    
    return 0; 
}

