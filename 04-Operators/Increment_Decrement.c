#include <stdio.h>                             

int main() {                                  
    int a = 5;                                  // Starting value 5
    printf("a++ = %d\n", a++);                  // Post-increment: pehle value use hoti hai (5), phir a badhta hai
    printf("a = %d\n", a);                      // Ab a = 6 ho chuka hai
    printf("++a = %d\n", ++a);                  // Pre-increment: pehle a badhta hai (7), phir value use hoti hai
    printf("a-- = %d\n", a--);                  // Post-decrement: pehle 7 print, phir a = 6
    printf("--a = %d\n", --a);                  // Pre-decrement: pehle a = 5, phir print
    return 0;                                   
}                                              
