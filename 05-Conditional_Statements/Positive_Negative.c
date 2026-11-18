#include <stdio.h>                              

int main() {                                   
    int num;                                    // Number store karne ke liye
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &num);                          // Number input lo
    if (num > 0) {                              // 0 se bada hai to positive
        printf("Positive\n");                   // Positive print karo
    } else if (num < 0) {                       // 0 se chhota hai to negative
        printf("Negative\n");                   // Negative print karo
    } else {                                    // Dono nahi, matlab number 0 hai
        printf("Zero\n");                       // Zero print karo
    }                                           
    return 0;                                   
}                                               
