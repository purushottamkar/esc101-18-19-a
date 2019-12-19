#include <stdio.h>

int main(){
    int a = 10;
    // Print the same integer in different representations
    printf("Decimal %d\nOctal %o\nhex %x\nHEX %X\n", a, a, a, a);
    
    // You can even read the input in different formats
    // Give the input as 101
    scanf("%o", &a);
    printf("%o in octal is %d in decimal\n", a, a);
    
    // Be careful, if you give illegal characters
    // scanf will stop reading the input thinking the number is over
    // Give 10890 as a second input to this code
    // Since read format is specified as octal, only 10 will be read
    // since 8 is not an allowed digit in octal format
    scanf("%o", &a);
    printf("I read %o in octal which is %d in decimal", a, a);
    return 0;
}