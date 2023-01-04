#include<stdio.h>
#include<math.h>
long int primes (long int num){
    int i;
    int FLAG=1, z;

    if (num < 2){
        return (-1);
    }else {
   for(i=2;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      z = 1;
   }
   else
   {
      z = 0;
   }
   return(z);
}
}
void main()
{
   long int primo;
   int resultado;
   while (scanf("%ld",&primo)!= EOF){
   resultado = primes (primo);

   printf("%d\n", resultado);
   }

}

