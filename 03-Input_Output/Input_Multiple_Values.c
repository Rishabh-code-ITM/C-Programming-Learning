#include <stdio.h>                              
int main() {                                         
    int age;                                            // Integer variable
    float height;                                       // Float variable
    char grade;                                         // Character variable
    printf("Enter age, height and grade: ");            // Ek hi line mein teen values maagane ke liye  
    scanf("%d %f %c", &age, &height, &grade);           // Ek scanf mein teen alag type ki values lene ke liye 
    printf("Age=%d Height=%.1f Grade=%c\n", age, height, grade);   // Teeno values print karne ke liye 
    return 0;                                           
}                                                     
