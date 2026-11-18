#include <stdio.h>                          

int main() {                              
    double pi = 3.141592653589793;          // Double variable, float se zyada precision deta hai
    printf("Pi = %lf\n", pi);               // %lf double print karne ke liye
    printf("Pi = %.10lf\n", pi);            // %.10lf se 10 decimal places tak dikhta hai
    return 0;                             
}                                          
