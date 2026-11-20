#include <stdio.h>                                       

float add(float a, float b) { return a + b; }              
float subtract(float a, float b) { return a - b; }          
float multiply(float a, float b) { return a * b; }       
float divide(float a, float b) { return a / b; }           

int main() {                                          
    float x, y;                                         
    char op;                                              
    printf("Enter expression (e.g. 8 * 3): ");             
    scanf("%f %c %f", &x, &op, &y);                       
    switch (op) {                                           
        case '+': printf("Result = %.2f\n", add(x, y)); break;         
        case '-': printf("Result = %.2f\n", subtract(x, y)); break;    
        case '*': printf("Result = %.2f\n", multiply(x, y)); break;     
        case '/':                                           
            if (y != 0) printf("Result = %.2f\n", divide(x, y));  
            else printf("Cannot divide by zero\n");         
            break;                                          
        default: printf("Invalid operator\n");            
    }                                                       
    return 0;                                              
}                                                        
