/*Francisco Colín Ulises
Práctica 11, Programa 1*/

#include <stdio.h>
#include <string.h>

// Prototipo o firma de las funciones del programa
void imprimir(char[]);
void imprimir2(char[]);

// Definición o implementación de la función main
int main()
{
    char nombre[] = "Facultad de Ingenieria";
    imprimir(nombre);
    imprimir2(nombre);
    return 0;
}

// Implementación de las funciones del programa
void imprimir(char s[])
{
    int tam;
    for ( tam=strlen(s)-1 ; tam>=0 ; tam--)
    printf("%c", s[tam]);
    printf("\n");
}

void imprimir2(char s[])
{
    int tam, i;
    tam = strlen(s) - 1;
    
    for (i = 0;  i <= tam; i++)
    printf("%c", s[i]);
    printf("\n");
}
