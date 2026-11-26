#include <stdio.h>                             
void greet() {                               
    printf("Hello from function!\n");         
}                                              

int main() {                                 
    greet();                                    // Function ko call kiya, control greet() mein jayega
    greet();                                    // Same function dobara call kar sakte hain (code reuse)
    return 0;                                 
}                                           
