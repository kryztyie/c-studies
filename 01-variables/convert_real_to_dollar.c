#include <stdio.h>

int main()
{
   //Variable declarations
   double dollar, real;
   const double EXCHANGE_RATE = 0.19;
   
   // Input value in reais (BRL)
   printf("Enter the value in reais (BRL): ");
   scanf("%lf", &real);
   
   // Convert real to dollar (exchange rate on December 1, 2025)
   dollar = (real * EXCHANGE_RATE);
   
   printf("\n%.2f BRL = %.2f USD\n", real, dollar);
    
   return 0;
}
