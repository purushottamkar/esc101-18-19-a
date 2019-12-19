#include <stdio.h>
int main(){
    int temp = 30;
    if(temp < 22){
        printf("Too Cold");
    }else{
        if (22 <= temp <= 27){
         printf("Just Right");
        }else{
            printf("Too Hot");
        }
    }
    return 0;
}