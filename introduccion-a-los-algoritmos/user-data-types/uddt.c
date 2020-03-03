#include "stdlib.h"
#include "stdio.h"
#include "string.h"
// User Data Defined Types

struct client 
{
  char Name[50];
  char Id[10];
  float Credit;
  char Address[100];

};

int main(int argc, char const *argv[])
{
  struct client Client = {0};
  strcpy(Client.Name, "Luis Davaria Ccalluchi Lopez");
  strcpy(Client.Id, "0000000001");
  Client.Credit = 10000;
  strcpy(Client.Address, "Av.Pedro P. Diaz Mz.31 Lt.1");

  printf("Id : %s \n", Client.Id);
  printf("Name : %s \n", Client.Name);
  printf("Credit : %f \n", Client.Credit);
  printf("Address : %s \n", Client.Address);
  return 0;
}