#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numero;

 int resultado;
 int contador;
 int contadorpar;
 int contadorCeros;
 int contadorneg;
 int contadorpos;
 int numeroMin;


 contador = 0;
 contadorpar = 0;
 contadorCeros = 0;
 contadorneg = 0;
 contadorpos = 0;
 printf("Ingrese la cantidad de numeros\n");
 scanf("%d",&numero);
 printf("poner %d de numeros \n",numero);

 for(int i=1; i <= numero;i++)
    {
    if(numero == 0)
        {
          contadorCeros++;
        }
    else{
        if(numero % 2 == 0 || contador == 0){
            contadorpar++;
        }
    }

    if(numero > 0)
    {
    contadorpos++;
    }
    else
    {
    contadorneg++;
    }
    if(numero<numMin || contador == 0)
    {
        numMin = numero;
    }
    contador++;
    scanf("%d", &resultado);
    acumulador = acumulador + contadorpos;

    }
    promedio = acumulador/ contador;
    printf("")
return 0;
}
