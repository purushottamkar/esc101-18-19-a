#include <stdio.h>
int main(){
    int a = 5, b = 0;
    if((a != 0) && (b != 0))
        if(a * b >= 0)
            printf("Positive product");
    else
        printf("One number is zero");
    return 0;
}