//Si scriva una funzione che riceva in input e restituisca 1 se i due numeri sono uguali a meno di un parametro epsilon, 0 altrimenti. 

#include <stdio.h> //printf, scanf 

//calcolo il valore assoluto della differenza di due numeri
double valore_assoluto (double a) 
{
   double abs; //var per memorizzare il risultato
  
  if(a >= 0) //se a è non-negativo
  {
    abs = a; //il valore assouluto è a
  }
  
  if(a < 0)//se a è negativo 
  { 
    abs = -a; //il valore assoluto è -a
  }

  return abs;
}

int uguali(double a, double b, double epsilon) 
{
  double diff = valore_assoluto(a-b); //calcolo il valore assoluto della differenza
  
  if(diff<epsilon) //se sono uguali a meno di epsilon 
  {
    return 1; //ritorno 1
  }  
  
  else //se distano più di epsilon
  {
    return 0; //ritorno 0
  }
}

int main() 
{
  //leggo variabili da tastiera 
  double x, y, epsilon;
    
  printf("Inserire epsilon (e): ");
  scanf("%lf", &epsilon);
    
  printf("Inserire x: ");
  scanf("%lf", &x);
    
  printf("Inserire y: ");
  scanf("%lf", &y);

  //chiamo la funzione 
  int c = uguali(x, y, epsilon);

  if(c == 1)
    printf("I due numeri sono uguali con epsilon %f\n", epsilon);
  else{
    printf("I due numeri sono diversi con epsilon %f\n", epsilon);
  }

  return(0);

}