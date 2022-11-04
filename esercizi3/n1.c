//// Aggiorno per calcolare l'elemento `i + 1`-esimo

#include <stdio.h>

int minimo_tara_tre(int x, int y, int z)
{
    //variabile dove memorizzare il min 
    int min;
    //confronto a e b
    if(x <= y) //metto in min il più piccolo tra a e b
    {
        min = x;
    }
    else if (x <= y)
    {
        min = y;
    }
    if(min > z) //devo confrontare min con c 
    {
        min = c
    }
    //se c>min non faccio niente:
    //il minimo cercato è già in min 
    return min;
}

void test(int x, int y,)
{
    int max; // seleziono il massimo tra a e b
    if(x >= y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    for(int i = 1; i <= max, i++)// devo ciclare da 1 a max{a,b}
    {
        print("tripletta( %d, %d, %d) - minimo -> %d\n", x,y,i,  minimo_tra_tre
    }
}

int main()
{//dove leggere gli input
    int x, y;
    printf(" Inserisci il numero (x): ");
    scanf("%d", &x);
    printf("Inserisci il numero (y): ");
    scanf("%d", &y);
    //testo la funzione
    test(x,y);
    return 0;
}