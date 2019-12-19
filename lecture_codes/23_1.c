#include <stdio.h>

int main(){
	// Take a long integer from the input and extract 8 characters hidden inside it
    // Create a character array to store the 8 characters + 1 NULL character
	// Also need a character pointer since only that increments by 1 byte
	// long pointers increment by 8 bytes
	char str[9], *ptr;
    str[8] = '\0'; // Set the delimiter yourself to be safe
    long num;
    scanf("%ld", &num);
    int i;
    ptr = (char*) &num; // Need to typecast the pointer since &num is a long* pointer
    for(i = 7; i >= 0; )
        str[i--] = *(ptr++); // ++ and -- operators increment/decrement respectively but give the old value
        
    printf("%s", str);
    return 0;
}