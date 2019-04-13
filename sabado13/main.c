#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 3
int main()
{  float precios[TAMANIO];
   float codigo[TAMANIO][7];
    int i;

    for(i =0; i=TAMANIO;i++)
    {
        while(getPrecio("Ingrese precio, porfa!!",&precios[i])==0)
        {
            printf("error..");
        }
    while(getCodigo("ingrese codigo, porfa!!",&codigo[i])==0)
        {
            printf("error..");
        }

    }
    for (i=0; i<TAMANIO;i++)
    {
        printf("precio %f\n",precios[i]);
    }
    return 0;
}
int getCodigo(char *mensaje, float *codigo)
{
char ingreso[50];
int retorno=0;
printf(mensaje);
scanf("%s",ingreso);
if(strlen(ingreso)==0)
{

    retorno = 1;
}
}
return retorno;
int getPrecio(char *mensaje, float *elPrecio)
{
char ingreso[50];
float auxPrecio;
int retorno=0;
printf(mensaje);
scanf("%s",ingreso);
auxPrecio=atof(ingreso);
if(auxPrecio>0)
{
    *elPrecio = auxPrecio;
    retorno = 1;
}
return retorno;
}
