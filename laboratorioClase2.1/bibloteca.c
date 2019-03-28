#ifndef BIBLOTECA_C_INCLUDED
#define BIBLOTECA_C_INCLUDED


int cambiarValor( int valor)
    {
        valor = 999;
        return 1;
    }

int cambiarValorReferencia( int *valor)
    {
        printf("El valor es: %d",valor);
        *valor = 999;

        return 1;
    }

    int dividirPorReferencia(int DUno, int DDos, float *respuesta)
    {
        if(DUno != 0)
        {
            *respuesta = (float)DUno/DDos;
            return 1;
        }
        return 0;

    }

int saludar()
{
    printf("Hola biblioteca");
}
int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta = esDistintoACero(numero);
    if(respuesta==1)
    {
       resultado = numero/2;
    }
     return respuesta;
}


int esDistintoACero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
  return 0;
}//el numero que con sus antesesores da el mismo numero. sus anteriores numeros
int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;

    }
  respuesta = numero*factorial(numero-1);
  return respuesta;
}

#endif // BIBLOTECA_C_INCLUDED
