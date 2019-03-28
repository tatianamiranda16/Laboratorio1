#include <stdio.h>
#include <stdlib.h>

int main()
{// DEVUELVE UN ENTERO QUE SE RETORNA
    int edad;
    int retorno;
    do{
        printf("Ingrese su edad : ");

        retorno=scanf("%d",&edad );
        fflush(stdin);
    }while(retorno==0);

    printf("la respuesta es: %d",retorno);
    printf("la edad es : %d",edad);
    return 0;
}
