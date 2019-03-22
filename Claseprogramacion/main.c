#include <stdio.h>
#include <stdlib.h>

int main()
// para pausar el sistema es system("pause");
{
    int numero;
    char letra;
    char palabra[10];

    printf("Ingrese una palabra:");


    scanf("%s" ,&palabra);
    fflush(stdin);
    printf("La palabra es %s: ",palabra);


/*
    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    // & direecion de memoria de la variable que sigue.
    printf("Ingrese una letra: ");
    // fflush es tirar/ desacerse de algo. limpiar el buffer por ende si aprto enter no lo va a tomar porque lo va a limpiar
    fflush(stdin);

    scanf("%c",&letra);
    printf("La letra es %c\n y El NUMERO ES  %d",letra,numero);
*/

    //el orden de las variables tiene que ser ordenado en el printf
}
    //buffer ingreso de valores de perifericos, teclado, monitor.
    //
