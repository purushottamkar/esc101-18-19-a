#include <stdio.h>
#include <stdlib.h>

int main(){
    // Try changing to char str[3][2] and see errors happen!
    char str[3][4] = {"Hi","Ok","Bye"};
    char *ptr = *str;
    printf("%s\n",ptr);
    ptr += 4;
    printf("%s\n",ptr);
    ptr += 4;
    printf("%s\n",ptr);
    ptr += 1;
    printf("%s\n",ptr);
    return 0;
}