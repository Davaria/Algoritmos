# Nesecitamos dividir nuestro dataset
# Nesecitamos un punto pivotal
# Recursivamente ordenar cada mitad de mi array

def particion(arrayInteger, lower, higher):
  i = ( lower - 1 )
  pivot = arrayInteger[higher]

  for j in range(lower, higher):
    if arrayInteger[j] <= pivot:
      i = i + 1
      arrayInteger[i] ,arrayInteger[j] = arrayInteger[j] ,arrayInteger[i]

  arrayInteger[i+1], arrayInteger[higher] = arrayInteger[higher], arrayInteger[i+1]

  return (i+1)

def quickSort(arrayInteger, lower, higher):
  if lower < higher:
    pi = particion(arrayInteger, lower, higher)
    quickSort(arrayInteger, lower, pi-1)
    quickSort(arrayInteger, pi+1, higher)


arr = [1998, 1990, 10, 5, 6, 0, 1, -10, 3]
n = len(arr)
quickSort(arr, 0 , n-1)
print("Arreglo Ordenado: ")
for i in range(n):
  print("%d" %arr[i]),
