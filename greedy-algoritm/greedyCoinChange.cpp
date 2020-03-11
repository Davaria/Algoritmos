#include <iostream>
#include <climits>

using namespace std;

int greedyCoinChange(int coinSet[], int n, int N)
{
  if(N == 0)
    return 0;

  if (N < 0)
    return INT_MAX;

  int coins  = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    int result = greedyCoinChange(coinSet, n, N - coinSet[i]);

    if(result != INT_MAX)
      coins = min(coins, result + 1);
  }

  return coins;
}

int main(int argc, char const *argv[])
{
  int coinSet[] = {1, 5, 10, 15, 20};
  int n = sizeof(coinSet)/sizeof(coinSet[0]);
  int N = 27;
  printf("El minimo de monedas para dar cambio es %i.\n", greedyCoinChange(coinSet, n, N));
  return 0;
}
