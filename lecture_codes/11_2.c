#include <stdio.h>
int main(){
    int n = 2;
    // Mr C "falls through" cases if he does not encounter break;
    // Can be used creatively to produce very beautiful code
    switch(n){
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: printf("Weekday"); break;
        case 6: 
        case 7: printf("Weekend"); break;
        default: printf("Illegal day"); break;
    }
    
    // Order of the cases does not matter if we have break statement
    // in each case. However, if we are omitting break, then order
    // of cases matters a lot
    switch(n){
        case 5: printf("Weekday"); break;
        case 1: 
        case 2: 
        default: printf("Illegal day"); break;
        case 3: 
        case 4: 
        case 6: 
        case 7: printf("Weekend"); break;
    }
    
    return 0;
}