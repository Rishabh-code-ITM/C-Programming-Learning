#include <stdio.h>                                    

unsigned long long factorial(int n) {                  
    unsigned long long fact = 1;                   
    for (int i = 2; i <= n; i++) {                     
        fact *= i;                                 
    }                                             
    return fact;                                    
}                                                      

int main() {                                            
    int n;                                           
    printf("Enter a number: ");                      
    scanf("%d", &n);                                   
    printf("Factorial = %llu\n", factorial(n));       
    return 0;                                        
}                                                      
