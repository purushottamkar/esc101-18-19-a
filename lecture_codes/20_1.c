#include <stdio.h>

int main(){
    char c, str[201];
    int i = 0, fin;
    
    // Use the fact that assignment expressions generate values
    while((c = getchar()) != EOF){
        str[i++] = c;
        // Need to save the last character in array for NULL
        if(i >= 200)
            break;
    }
	
	// There are those who love writing obfuscated code, i.e.
	// code that works but is hard to read.
	// The above can be rewritten equivalently (but in a risky way) as
	// while((c = getchar()) != EOF)
    //    if((str[i++] = c) - c + i >= 200)
    //        break;
    
    // When loop exits due to break, length of string must be i-1
    fin = i-1;
    str[i] = '\0';
    
    // Print the input as is
    printf("%s\n", str);
    
    // Print the input in reverse
    for(i = fin; i >= 0; i--)
        putchar(str[i]);
    
    return 0;
}