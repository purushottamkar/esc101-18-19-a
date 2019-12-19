#include <stdio.h> // For printf, getline
#include <stdlib.h> // For malloc, free
#include <string.h> // For strncpy, strlen

int main(){
    // Take a string str of unknown length from the user
    // Create an array of strings, each containing a substring of str
    // Consider only non-empty substrings
    
    // Allocate a character array of size 1
    // Don't worry - getline will take care :)
    int i, j, k = 0, numElements = 1, len;
    char *str = (char*)malloc(numElements * sizeof(char));
    getline(&str,&numElements,stdin); // Let getline do its magic
    
    // How many characters did the user enter?
    len = strlen(str); // getline may overexpand the array
    // so cannot trust numElements to be the length of the string
    
    // There will be (len*(len+1))/2 non-empty substrings
    char **substrings = (char**)malloc((len*(len+1))/2*sizeof(char*));
    
    for(i = 0; i < len; i++){
        for(j = 1; i + j - 1 < len; j++){
            substrings[k] = (char*)malloc((j + 1) * sizeof(char));
            // Copy j characters from this point onwards
            // substrings[k] is just a normal string array
            // It is a part of an array of arrays
            strncpy(substrings[k], str + i, j);
            printf("%s\n", substrings[k++]);
        }
    }
    printf("We printed a total of %d substrings.", k);
    return 0;
}