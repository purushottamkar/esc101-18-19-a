#include <stdio.h>

int main() {
    float a = (float)21;
    printf("The value stored in a is : %f\n", a);
    a = (float)2147483648; // This number is the limit for no-distortion
    printf("The new value stored in a is : %f\n", a);
    a = (float)2147483650; // Now distortions will start
    printf("The new value stored in a is : %f\n", a);
    a = (float)9765432123; // More distortions
    printf("The new value stored in a is : %f\n", a);
    long b = 9765432123; // However a puny long can store it perfectly :O
    printf("The value stored in b is : %ld\n", b);
    a = (float)3000000000; // However, no distortions here - why?
    printf("The new value stored in a is : %f", a);
    // Wait for a few more weeks for the answer
	// Actually, 2147483648 = 2^31, why this is important will be revealed
    return 0;
}