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
 int numMin;
 int numMax;
 int acumulador;
 int promedio;

 acumulador = 0;

 contadorpar = 0;
 contadorCeros = 0;
 contadorneg = 0;
 contadorpos = 0;
 printf("Ingrese la cantidad de numeros\n");
 scanf("%d",&numero);
 printf("poner %d de numeros \n",numero);

 for(contador =0; contador <= numero;contador++)
    {

    if(numero == 0|| contador == 0 )
        {
          contadorCeros++;
        }
    else{
        if(numero % 2 == 0 || contador == 0){
            contadorpar++;
        }
    }

    if(numero > 0|| contador == 0)
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
    if(numero>numMax || contador == 0)
        {
        numMax = numero;
        }



    scanf("%d", &resultado);
    acumulador = acumulador + contadorpos;

    }
    promedio = acumulador/ contador;
    printf("La cantidad de ceros: %d \n",contadorCeros);
    printf("La cantidad de numeros pares: %d \n",contadorpar);
    printf("La cantidad de numeros positivos: %d \n",contadorpos);
    printf("la cantidad de numeros negativos: %d \n ", contadorneg);
    printf("El numero maximo %d \n" , numMax);
    printf("el minimo: %d  \n",numMin );
    printf("El promedio del num positivo: %d \n", promedio);

return 0;
}
