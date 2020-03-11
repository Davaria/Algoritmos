#include <stdio.h>

long factorial (int n) {
  if (n == 0) 
    return 1;
  
  return (n * factorial(n -1 ));
}

int main(int argc, char const *argv[])
{
  int number;
  long result;
  printf("Ingresa un entero: \n");
  scanf("%i", &number);

  number >= 0
    ? result = factorial(number)
    : printf("Incorrecta, debes ingresar un numero entero positivo.\n");
  
  if(number >= 0)
    printf("El factorial %i  es %ld. \n", number, result);
    
  return 0;
}
