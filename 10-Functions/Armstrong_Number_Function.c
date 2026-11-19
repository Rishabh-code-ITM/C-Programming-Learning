#include <stdio.h>                                     

int isArmstrong(int n) {                                // 3-digit Armstrong check: ho to 1, warna 0
    int original = n, sum = 0;                          // Asli number save karo, sum 0 se start
    while (n != 0) {                                    // Har digit ke liye
        int d = n % 10;                                 // Last digit nikalo
        sum += d * d * d;                               // Digit ka cube jodo
        n /= 10;                                        // Last digit hatao
    }                                                  
    return sum == original;                             // Barabar ho to Armstrong
}                                                     

int main() {                                         
    int n;                                             
    printf("Enter a 3-digit number: ");                
    scanf("%d", &n);                                    
    if (isArmstrong(n)) {                               // Function ka result check karo
        printf("Armstrong number\n");                   // Armstrong hai
    } else {                                            // Warna  else automatcally run ho jata hai 
        printf("Not an Armstrong number\n");            // Armstrong nahi hai
    }                                                  
    return 0;                                           
}                                                   
