#include <stdio.h>                                    

int add(int a, int b) {                                 // Do parameters lekar unka sum return karega
    return a + b;                                       // Sum wapas bhejo
}                                                      

int main() {                                           
    int x, y;                                           // Do numbers ke variables
    printf("Enter two numbers: ");                     
    scanf("%d %d", &x, &y);                           
    printf("Sum = %d\n", add(x, y));                    // Function call karke seedha result print kiya
    return 0;                                         
}                                                       
