#include <stdio.h>                       
int main() {                              
    char ch;                                // Character store karne ke liye variable
    printf("Enter a character: ");          // User se ek character maango
    ch = getchar();                         // getchar() keyboard se ek character padhta hai
    printf("You entered: ");                // Message print karo
    putchar(ch);                            // putchar() ek character screen par print karta hai
    putchar('\n');                          // Nayi line print karo
    return 0;                             
}                                          
