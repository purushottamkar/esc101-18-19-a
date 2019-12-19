#include<stdio.h>
int main(){
    int x = 3;
    int result, temp1, temp2, temp3, temp4, temp5;
    temp1 = 2/3; // This is the culprit
    temp2 = x*x*x;
    temp3 = temp1*temp2;
    /* To remedy the above problem, we need to do the following
    temp3 = (2*x*x*x)/3;
    so that division takes place at the very end
    and that integer division errors do not distort calculations */
    temp4 = 2*x*x;
    temp5 = 9*x;
    result = temp3 + temp4 + temp5;
    printf("temp1 = %d, temp2 = %d, temp3 = %d, temp4 = %d, temp5 = %d\n", temp1, temp2, temp3, temp4, temp5);
    printf("The area under the curve is %d",result);
    return 0;
}