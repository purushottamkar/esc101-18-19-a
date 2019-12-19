#include <stdio.h>
int main(){
    int a;
    long b, c;
    a = 2000000000;
    b = a + a;
    /* a + a is calculated as an int and causes an error
    since result 4000000000 is too large to be stored in int */
    c = a + 3000000000;
    /* a gets automatically converted to long since 3000000000
    is interpreted by Mr C as a long as it exceeds the int range */
    printf("%ld\n%ld",b,c);
    return 0;
}