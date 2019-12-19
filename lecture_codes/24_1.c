#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len = 11; // I only expect 10 characters to be entered
    char *str = (char*)malloc(len * sizeof(char));
    char **ptrstr = &str;
    // Let me declare a dummy integer array just to make life fun :)
    int *ptr = (int*)malloc(len * sizeof(int));
    ptr[2] = 1;
    printf("Array str at address %ld with %d elements\n", str, len);
    // First give a short string such as "Hello" (without quotes) as input
    // Then give input such as "Hello and welcome" which exceeds 10 chars
    getline(ptrstr, &len, stdin);
    printf("Array str is now at address %ld with %d elements\n", str, len);
    printf("Input string is \"%s\" with length %d but array length is %d\n",*ptrstr,strlen(*ptrstr),len);
    return 0;
}