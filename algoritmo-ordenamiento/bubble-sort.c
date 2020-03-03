#include <stdio.h>

void exchange(int *a, int *b){
  int temp = *a;
  *a =  *b,
  *b = temp;
}

void bubbleSort(int values[], int size){
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if(values[j] > values[j+1]){
        exchange(&values[j],  &values[j+1]);
      }
    }
  }
}

void getValues(int values[], int size){
  for(int i = 0; i < size; i++)
    printf(" %d ", values[i]);
  printf("\n");    
}

int main(int argc, char const *argv[])
{
  int values [] = {10, -1, 40, 100, 50, 60};
  int size = sizeof(values)/sizeof(values[0]);
  bubbleSort(values, size);
  getValues(values, size);

  return 0;
}
