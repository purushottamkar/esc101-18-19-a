#include <stdio.h>
int main(){
    int a = 2, b;
    // Print the table of 2
    for(b = 1; b <= 10; b++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // Print the table of 3
    a = 3;
    for(b = 1; b <= 10; b++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // Print the table of 2 from 10 to 20
    for(b = 10; b <= 20; b++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // After initialization, stopping condition checked
    // Then statements inside the body of the for loop executed
    // Careful, after initialization, statements not executed
    // unless stopping criterion met
    for(b = 11; b <= 10; b++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // Once stopping expression evaluates to false, entire
    // loop is exited
    for(b = 11; b <= 10; b--){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // Can omit the intialization and update expressions
    // Initialization can be put as a statement before for loop
    // Update can be put as a statement inside for loop
    b = 1;
    for(;b <= 10;){
        printf("%d x %d = %d\n",a,b,a*b);
        b++;
    }
    
    // Be careful, update is done after all regular statements done
    // The program below will not print the same table as above
    b = 1;
    for(;b <= 10;){
        b++;
        printf("%d x %d = %d\n",a,b,a*b);
    }
    
    // Beware of infinite loops due to faulty initialization,
    // faulty stopping criterion or faulty update
    // The update expression is faulty below
    for(b = 1; b <= 10; b--)
        printf("%d x %d = %d\n",a,b,a*b);
        
    return 0;
}