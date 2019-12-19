#include <stdio.h>

int isTermChar(char x){
    return x == '.' || x == '?' || x == '!';
}

int isLowerAlpha(char z){
    return z >= 'a' && z <= 'z';
}

int isUpperAlpha(char z){
    // Functions can call each other too :)
    // Note that z is an upper case alphabet if and only if
    // z - 'A' + 'a' is a lower case alphabet
    return isLowerAlpha(z - 'A' + 'a');
}

int main() {
    int n, newSentence;
    char c;
    
    scanf("%d\n", &n);
    for( ; n; n--){
        newSentence = 1;
        c = getchar();
        while(c != EOF && c != '\n'){ // Read the line by character
            if(isTermChar(c)) // Has a sentence finished ?
                newSentence = 1;
			// The mistake I was making in class was that I was checking
			// if(newSentence && isLowerAlpha(c))
			// which does not cover all cases since sentences may start with
			// non alphabet characters too e.g. "450 students are sitting in L20."
            else if(newSentence && c != ' '){ // Is this the first non space character
                newSentence = 0; // No longer at beginning of sentence
                if(isLowerAlpha(c)) // If lower case, convert to upper
                    c = c - 'a' + 'A';
            }else if(!newSentence && isUpperAlpha(c)) // Is a non first alphabet character upper case?
                c = c - 'A' + 'a';
            printf("%c", c); // Print the character in proper case
            c = getchar(); // Get the next character.
        }
        if(n > 1) printf("\n");
    }
    
    return 0;
}