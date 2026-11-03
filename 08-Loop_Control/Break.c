#include <stdio.h>                            

int main() {                                   
    for (int i = 1; i <= 10; i++) {             // 1 se 10 tak loop
        if (i == 6) {                           // Jab i 6 ho jaye
            break;                              // break loop ko turant rok deta hai
        }                                  
        printf("%d ", i);                       // 1 se 5 tak print hoga
    }                                          
    printf("\nLoop stopped at 6\n");            
    return 0;                                
}                                              
