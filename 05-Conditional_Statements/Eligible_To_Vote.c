#include <stdio.h>                                      

int main() {                                            
    int age;                                            // Age store karne ke liye
    printf("Enter your age: ");                         // Age maango
    scanf("%d", &age);                                  // Age input lo
    if (age >= 18) {                                    // India mein vote dene ke liye 18 saal ya zyada hona zaroori hai
        printf("Eligible to vote\n");                   // Vote de sakte ho
    } else {                                            // 18 se kam age
        printf("Not eligible to vote\n");               // Vote nahi de sakte
    }                                                   
    return 0;                                          
}                                                      
