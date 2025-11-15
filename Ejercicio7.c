/*Francisco Colín Ulises
Práctica 11, Programa 7*/

#include <stdio.h>
//Declaclación de las funciones
int suma(int,int);
static int resta(int,int);
int producto(int,int);
static int cociente (int,int);

int main()
{
    printf("5 + 7 = %i\n",suma(5,7));
    //printf("9 - 77 = %d\n",resta(9,77));
    printf("6 * 8 = %i\n",producto(6,8));
    //printf("7 / 2 = %d\n",cociente(7,2));
    return 0;
}

//Implementación de las funciones
int suma (int a, int b)
{
    return a + b;
}
static int resta (int a, int b)
{
      return a - b;
}
int producto (int a, int b)
{
    return (int)(a*b);
}
static int cociente (int a, int b)
{
    return (int)(a/b);
}
