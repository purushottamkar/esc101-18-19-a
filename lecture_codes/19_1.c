#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    // Uninitialized strings can contain junk - be careful
    int i;
    printf("Uninitialized string characters and their ASCII values within brackets\n");
    for(i = 0; i < 10; i++)
        printf("%c(%d)",str[i],str[i]);
    printf("\n");
    
    /************ CAUTION: scanf and gets are both risky **********/
    // Both cause program to crash if user input is much longer
    // than size of the character array
    // Try giving "Hello World ESC101" as input (without quotes)
    // before running this program
    
    /************ scanf and printf **************/
    scanf("%s",str);
    printf("%s\n", str); // scanf stops reading after white space
    
    /************ gets and puts **************/
    // WARNING: gets is deprecated in Clang
    // Compiling this code will give a warning
    // It is risky to use it anymore
    gets(str); // Shortcut to print a string till \n
    // The \n is not stored anywhere - it is thrown away
    puts(str); // Shortcut to print a string
    // Note that " World ESC101" will get stored (with a \0 at the end)
    // Notice that the string starts with a space. This is the space
    // that scanf had used to stop reading input
    printf("\n");
    
    return 0;
}