// Aggiorno per calcolare l'elemento `i + 1`-esimo

#include <stdio.h>

int main()
{
    int n, k;
    prtinf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire k: ");
    scanf("%d", &k);
    int corff_bin = 0;

    if(n >= k) 
    {
        int n_fact = 1;
        int k_fact = 1;
        int nk_fact = 1;

        for (int i = n; i > 0; i--0)
            {
                if(i <= k)
                    k_fact *= i; // calvolo k!

                if (i <= (n - k))
                    nk_fact *= i; // calcolo (n-k)!

                n_fact *= i; // calcolo n!
            }
        coeff_bin = N-fact / (k_fact * nk_fact); // uso la formula
    }

    prinf("Coefficiente binomiale di %d su %d; %d\n", n, k, coeff_bin);
    return 0;
}