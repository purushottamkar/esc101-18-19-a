#include <stdio.h>

int main(){
/* Give the following input to this program and see what happens
(%d), (%d), (%d)
(1), (22), (333)
#1: %d, #2: %d, #3: %d
*/    
    char formatScanf[1000], formatPrintf[1000];
    int a, b, c;
    // Read the format string the user specified for input
    gets(formatScanf); // Dont use scanf to read the format string
    // Scanf stops reading at spaces and format string may contain spaces
    // Read the three numbers in user-specified manner
    scanf(formatScanf, &a, &b, &c);
    // Read the format string the user specified for output
    scanf("\n"); // There is a stray \n to be captured
    gets(formatPrintf);
    // Print the three numbers in the manner the user wanted
    printf(formatPrintf, a, b, c);
    return 0;
}