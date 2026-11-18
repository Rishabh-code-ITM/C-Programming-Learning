#include <stdio.h>                         
int main() {                              
    int num;                                // Number store karne ke liye variable
    printf("Enter a number: ");             // User ko batao ki kya input dena hai
    scanf("%d", &num);                      // Keyboard se integer lo, & se variable ka address do
    printf("You entered: %d\n", num);       // Jo number diya tha wahi print karo
    return 0;                               
}                                          
