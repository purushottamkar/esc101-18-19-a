#include <stdio.h>
int main(){
    // TRY COMPILING THIS PROGRAM TO SEE VARIOUS ERRORS AND WARNINGS
    
    float n = 3.0;
    // Can't switch on a float, must be an integer
    switch(n){
        case 1: printf("n = 1"); break;
        case 2.0: printf("n = 2.0"); break; // Labels must be integers
    }
    
    int b = 3;
    
    // However, after typecasting, perfectly fine
    switch((int)n){
        default: printf("Illegal day"); break; // Can give default case anywhere or even omit it
        case 1: printf("Monday"); break;
        case b-1: printf("Tuesday"); break; // Labels must be constants
        case 2+2: printf("Thursday"); break; // Labels must be integer constants but expressions with constant values allowed
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 6: printf("Saturday again"); break; // Repeating cases not allowed
        case 7: printf("Sunday"); break;
        case 3: printf("Wednesday"); break; // Can give cases in any order
    }
    
    // Also try switch with b = 5, b == 5
    // The below switch statement will generate a warning
    // but will work as expected since relational expressions
    // generate 0, 1 values which can be interpreted as integers
    switch(b < 5){
        case 0: printf("b < 5 is 0"); break;
        case 1: printf("b < 5 is 1"); break;
        case 2: printf("b < 5 is 2"); break;
        case 3: printf("b < 5 is 3"); break;
        case 4: printf("b < 5 is 4"); break;
        case 5: printf("b < 5 is 5"); break;
        default: printf("Something fishy"); break;
    }
    return 0;
}