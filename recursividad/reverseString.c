#include <stdio.h>
#include <string.h>

void exchange(char letters[])
{
  if(strlen(letters)){
    return letters;
  }else
  {
    return exchange(letters);
  }
  
}

int main(int argc, char const *argv[])
{
  char letter[] = {"hola"};
  int size = strlen(letter);

  printf("El tamaño de la cadena es %i \n", size);

  exchange(letter);

  printf("La cadena ahora es %s \n", letter);

  return 0;
}
