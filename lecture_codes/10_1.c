#include <stdio.h>
int main(){
    int b = 2;
    int c = 2;
    if (b == 3){
        printf("Inside if - value of b is %d which is equal to 3\n", b);
    }else{
        printf("Inside else - Value of b is %d which is not equal to 3\n", b);
    }
    
    if (c = 3){
        printf("Inside if - value of c is %d which is equal to 3", c);
    }else{
        printf("Inside else - value of c is %d which is not equal to 3", c);
    }
    return 0;
}