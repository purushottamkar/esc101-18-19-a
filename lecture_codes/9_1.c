#include <stdio.h>
int main(){
    int a = 3;
    printf("The value generated is %d\n",a++);
    printf("New value of a is %d\n",a);
    
    // Reset the value of a to try something new
    a = 3;
    printf("The value generated is %d\n",++a);
    printf("New value of a is %d\n",a);
    
    // b will get assigned the value 11
    // Since the value generated by ++a is the new value
    // The new value is 5 (a was already incremented in line 9)
    int b = 6 + ++a;
    return 0;
}