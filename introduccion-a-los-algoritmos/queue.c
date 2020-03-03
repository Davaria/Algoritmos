#include <stdio.h>
#define SIZE 5

int values[SIZE], front = -1, rear = -1;

void enQueue(int value)
{
  // Verificamos si tenemos un espacio en nuestro array
  if (rear == SIZE - 1)
    printf("Nuestro queue esta lleno.\n");
  else
  {
    if (front == -1)
      front = 0;
    rear++;
    // Asignamos nuestro valor a el array
    values[rear] = value;
    printf("Se inserto el valor %d correctamente.\n", value);
  }
}

void deQueue()
{
  if (front == -1)
    printf("Nuestro queue esta vacio.\n");
  else
  {
    printf("Se elimino el valor %d correctamente\n", values[front]);
    front++;
    /* Reto
      - Agregar un queue de manera dinamicamente
    */
    front > rear
      ? front = rear = -1
      : rear--;
  }
}

int main(int argc, char const *argv[])
{
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  enQueue(10);
  return 0;
}
