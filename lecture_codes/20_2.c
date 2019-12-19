#include <stdio.h>
#include <string.h>

int main(){
    char src[100] = "Hello World", dest[100];
    printf("Length of src string is: %d\n",strlen(src)); // Number of chars before the first NULL
    
    src[5] = '\0'; //Delimit after Hello
    printf("Src string after forced delimiting is: %s\n", src);
    
    strcpy(dest,src); // Copy src to dest
    // Characters after NULL do not get copied
    printf("7th character in src is %c but 7th char in dest is %c\n", src[6], dest[6]);
    
    char newSrc[100] = "World";
    strcat(dest, newSrc);
    printf("String dest is now: %s\n", dest);
    
    char newDest[100] = "Worle";
    
    printf("Comparison between strings newSrc and newDest: %d\n", strcmp(newSrc, newDest));
    printf("Comparison between first 4 chars of strings newSrc and newDest: %d\n", strncmp(newSrc, newDest, 4));
    
    printf("The substring \"loW\" is present in the string dest\n");
    printf("In case a substring is present, strstr returns a pointer to the first location of the substring.\n");
    printf("We will study pointers soon but in this case, the pointer is %ld.\n",strstr(dest,"loW"));
    
    if(!strstr(dest,"ESC101")){
        printf("The substring \"ESC101\" is not present inside the string dest.\n");
        printf("In case a substring is not present, strstr returns %ld which is a NULL pointer.", strstr(dest, "ESC101"));
    }
    return 0;
}