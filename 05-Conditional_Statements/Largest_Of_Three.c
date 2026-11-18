#include <stdio.h>                     //header file                 

int main() {                                  // main function/ starting point 
    int a, b, c;                                        // Teen numbers ke variables
    printf("Enter three numbers: ");                    // Teen numbers maango
    scanf("%d %d %d", &a, &b, &c);                      // Teeno numbers input lo
    if (a >= b && a >= c) {                             // Agar a, b aur c dono se bada (ya barabar) hai
        printf("%d is largest\n", a);                   // To a sabse bada hai
    } else if (b >= a && b >= c) {                      // Agar b, a aur c dono se bada hai
        printf("%d is largest\n", b);                   // To b sabse bada hai
    } else {                                            // Baaki case mein c sabse bada hoga
        printf("%d is largest\n", c);                   // c print karo
    }                                                  
    return 0;                                           
}                                                      
