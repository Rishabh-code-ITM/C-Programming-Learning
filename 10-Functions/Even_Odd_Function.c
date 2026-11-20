#include <stdio.h>                              

int isEven(int n) {                           
    return n % 2 == 0;                        
}                                             

int main() {                                   
    int num;                                    
    printf("Enter a number: ");                
    scanf("%d", &num);                          
    if (isEven(num)) {                    
        printf("Even\n");                     
    } else {                                   
        printf("Odd\n");                      
    }                                         
    return 0;                                
}                                              
