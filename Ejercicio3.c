/*Francisco Colín Ulises
Práctica 11, Programa 3*/

#include <stdio.h>

int resultado; //variable global

void multiplicar(); // prototipo de la función
void sumar(); // prototipo de la función
void restar(); // prototipo de la función
void dividir(); // prototipo de la función

int main()
{
    multiplicar(); //llamado de la función multiplicar
    printf("Resutado multiplicacion: %i\n",resultado);
    sumar();
    printf("Resultado suma: %d\n", resultado);
    restar();
    printf("Resultado resta: %d\n", resultado);
    dividir();
    printf("Resultado division: %d\n", resultado);
    return 0;
}

void multiplicar() //función multiplicar
{
    resultado = 5 * 4;
}

void sumar() //función multiplicar
{
    resultado = 5 + 4;
}

void restar() //función multiplicar
{
    resultado = 5 - 4;
}

void dividir() //función multiplicar
{
    resultado = 5 / 4;
}
