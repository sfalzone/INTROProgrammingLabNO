// Dati due interi `n` e `k` da tastiera calcola la sommatoria `S(n, k)`

#include <stdio.h>

int main() 
{
    int n, k; // Chiediamo `n` e `k` all'utente
    printf ("Inserire n: ");
    scanf ("%d", &n);
    printf ("Iserire k: ");
    scanf ("%d", &k);
    int somma = 0; // Variabile che conterrà il risultato
    int tmp = k; // Variabile ausiliaria

    for (int i = 1; i<= n; i++) // Ciclo sugli elementi della sommatoria
        {
            somma += tmp;// Aggiungo `k ^ i` alla somma
            tmp = tmp * k;// Aggiungo `k ^ i` alla somma
        }
    printf("Risultato sommatoria: %d\n", somma);
    return 0;
}