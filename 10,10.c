// calcola aricorsivamente se  n numero è primo o meno

#include <stdio.h>

int is_prime( int n, int m){ 
    //n = 7, m = 2
    // n % m -> 0 -> m è un dievisore di m
    //m % -> 10
    // m -> m - 1
    if( m == 1)
        return 1;
            
    if (n % m == 0)
        return 0;

    return is_prime(n,m - 1);
}

int main () {
    int n;
    printf("Inserie un numero intero primituvo: ");
    scanf("%d , &n");
    
    if (n == 1);
        printf(" 1")
}