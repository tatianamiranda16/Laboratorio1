#include <stdio.h>
#include <stdlib.h>
int EsUnNumero(char *cadena)
{
    int indice = 0;
    int retorno = 0;
    int numero;
    int es;
   // printf("\npalabra pasada por paramtros %d",cadena);

    while(cadena[indice]!='\0')
        {
          if(cadena[indice]<'0'||cadena[indice]>'9')
          {
              break;
          }else{
            indice++;
          }
        }
        if(cadena[indice]=='\0')
        {
            retorno =1;
        }


    return retorno;


}

int main()
{

    char letra;
    char palabra[10];
    int numero;
    int es;
/*
    scanf("%d", &numero );
    fflush(stdin);
    printf("\nnumero %d", numero );


    scanf("%d",&letra);
    fflush(stdin);
    printf("\nletra %d",letra);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %c",letra);
/*
    scanf("%s",&letra);
    fflush(stdin);
    printf("\nletra %s",letra);
*/
    scanf("%s",&palabra);
    fflush(stdin);
    printf("\npalabra ingresada %s",palabra);
    es = EsUnNumero(palabra);
    if(es ==1)
    {
        printf("es correcto");

    }else{
    printf("no lo es");
    }

    /*
    int indice = 0;
    while(indice<20)
    {
        if(palabra[indice]== '\0')
{
     printf("el barra cero esta en %d ", )
}        printf("\nletra %s",palabra[indice]);
        indice++;
 }


 /*
 int miDato = 333;
    cambiarValor(miDato);
    printf("Mi dato es: %d \n", miDato);
    cambiarValor(&miDato);
    printf("Mi dato es: %d \n", miDato);*/



    //saludar();
    /*
    int edad;
    int retorno;
    do{
        printf("Ingrese una edad: ");
        retorno = scanf("%d",&edad);
        fflush(stdin);
    }while(retorno == 0);

    printf("La respuesta es: %d \n",retorno);
    printf("La edad es: %d",edad);

    int dato;
    dato = dividir(6);
    printf("El dato es: %d \n",dato);
    dato = dividir(0);
    printf("el dato es: %d",dato);

    int unFactorial;
    unFactorial = factorial(5);
    printf("El factorial es: %d \n",unFactorial);*/

    return 0;


}



