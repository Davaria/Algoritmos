#include <stdio.h>
#include <math.h>

/* Función de insertion Sort*/
void insertionSort(int values[], int size)
{
  int value, i, j;
  for (i = 1; i < size; i++)
  {
    printf("%i \n", i);
    value = values[i]; //obtenemos el valor actual a comparar
    j = i - 1;
    printf("-------\n");
    printf("%i \n", j);
    /* mueve los elementos del arreglo values[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actual */
    while (j >= 0 && values[j] > value)
    {
      values[j + 1] = values[j];
      j = j - 1;
    }
    values[j + 1] = value;
  }
}

// función auxiliar para imprimir un arrary de tamaño n
void printArray(int values[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", values[i]);
  printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
  int values[] = {0,1};
  int size = sizeof(values) / sizeof(values[0]);

  insertionSort(values, size);
  printArray(values, size);

  return 0;
}