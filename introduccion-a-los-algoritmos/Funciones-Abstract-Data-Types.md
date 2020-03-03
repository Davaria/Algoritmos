# Glosario de funciones para Abstract Data Types

En esta lectura de referencia encontrarás la definición de los 3 Abstract Data Types más utilizados: listas ADT, Stack o Pila ADT y Queue o Cola ADT.

La forma general de conocer cada una de estas 3 ADT es a través de sus definiciones y las definiciones sólo mencionan qué operaciones serán implementadas, sin embargo no especifican cómo se organizarán los datos en memoria o cuál algoritmo se utilizará para implementar las operaciones. Estas tres definiciones hacen parte de lo que conocemos como tipos de datos abstractos, porque dan una vista independiente de la implementación.
Debido a esto es importante que conozcas los métodos o funcionalidades que podrás encontrar en un ADT.

List ADT
Una lista es un tipo de datos abstracto utilizado para representar un número contable de valores ordenados. El mismo valor puede existir más de una vez, esta es la implementación computacional del concepto matemático de secuencia finita, la lista.

A continuación te comparto las operaciones disponibles en este ADT:

* get() – Retorna un elemento de la lista en cualquier posición especificada.
* insert() – Inserta un elemento en cualquier posición de la lista.
* remove() – Remueve la primera aparición de cualquier elemento en una lista no-vacía.
* removeAt() – Remueve el elemento que se encuentre en la posición especificada en una lista que no esté vacía.
* replace() – Reemplaza un elemento en cualquier posición por otro elemento.
* size() – Retorna el número de elementos contenidos en la lista.
* isEmpty() – Retorna true si la lista está vacía, si no, regresa false.
* isFull() – Retorna true si la lista está llena, si no, regresa false.

Stack ADT
Un Stack es un tipo de datos abstracto que sirve como una colección de elementos con dos operaciones principales:
Push: agrega un elemento a la colección
Pop remueve el elemento que se añadió más recientemente y que no ha sido removido, el orden en el que esto funciona como hemos visto en clases sigue la lógica LIFO (last in, first out) que en español sería “último ggen entrar, primero en salir”

A continuación te comparto las operaciones disponibles en este ADT:

* push() – Inserta un elemento en un extremo de la pila denominado “cima”.
* pop() – Remueve y retorna el elemento en la cima de la pila, si el stack no está vació.
* peek() – Retorna el elemento en la cima del stack sin removerlo, si el stack no está vacío.
* size() – Retorna el número de elementos en el stack.
* isEmpty() – Retorna true si el stack está vacío, si no, retorna false.
* isFull() – Retorna true si la lista está llena, si no, regresa false.

Queue ADT
Una cola es un ADT que sirve para almacenar datos en el orden en el que los datos van llegando, sigue una lógica del tipo FIFO o “primero en llegar, primero en salir” como es en la mayoría de supermercados.

A continuación te comparto las operaciones disponibles en este ADT:

* enqueue() – Inserta un nuevo elemento al final de la cola.
* dequeue() – Remueve y retorna el primer elemento de la cola si la cola no está vacía.
* peek() – Retorna el primer elemento de la cola sin removerlo.
* size() – Retorna el número de elementos almacenados en la cola.
* isEmpty() – Retorna true si la cola está vacía, si no, retorna false.
* isFull() – Retorna true si la cola está vacía, si no, retorna false.