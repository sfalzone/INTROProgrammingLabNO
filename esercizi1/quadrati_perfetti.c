#include <stdio.h>

// stampare i quadrati perfetti a 1 a n

void main()
{
    // dichiara la variabile n
    // n continen il numero di elementi da considerare
    int n;
    print("inserire il valore di n:\n");
    scanf("%d", &n);

    printf("ti stamperò i quadrati perfetti fino a %d\n", n);

    int sq;
    for (int i = 1; i <= n; i++) 
    {
       sq = i*i;
        printf(" il quadrato di %d è %d\n", i, sq);
        //printf(" il quadrato di %d è %d\n", i, i*i);
    }

    for (int i = n; i >= 1; i-- )
     {
       sq = i*i;
        printf(" il quadrato di %d è %d\n", i, sq);
        printf(" il quadrato di %d è %d\n", i, i*i);
    }

    int p = 1,
    while (p<=n)
    {
       sq = i*i;
        printf(" il quadrato di %d è %d\n", p, p*p);
         p = p+1;
    }
    
    while (n>0)
    {
        printf("il quadrato di %d è %d\n", n, n*n);
        n = n -1;
    }
     
}