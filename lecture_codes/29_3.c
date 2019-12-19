#include <stdio.h>
#include <stdlib.h>

// Since we are asking for the address of a pointer
// our input datatype is a pointer to pointer
// Advantage: we can effectively return multiple
// pointer this way :)
// WARNING : return only dynamic arrays
// Static arrays are destroyed after function returns
void myGetline(char **ptr){
    char *str = (char*)malloc(100 * sizeof(char));
    int i = 0;
    char c = getchar();
    while(c != EOF){
        str[i++] = c;
        c =  getchar();
    }
    str[i] = '\0';
    *ptr = str;
}

// An alternative is to simply return the pointer
// Drawback - can only return one pointer
// WARNING : return only dynamic arrays
// Static arrays are destroyed after function returns
char* myAlternativeGetline(){
    char *str = (char*)malloc(100 * sizeof(char));
    int i = 0;
    char c = getchar();
    while(c != EOF){
        str[i++] = c;
        c =  getchar();
    }
    str[i] = '\0';
    return str;
}

int main(){
    char *ptr;
    // myGetline(&ptr); // Passing the address of a pointer
    ptr = myAlternativeGetline();
    printf("%s", ptr);
    return 0;
}